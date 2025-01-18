"""Build rules and macros for building Cyclone programs."""

load("@rules_cc//cc:action_names.bzl", "C_COMPILE_ACTION_NAME")
load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")
load("@rules_cc//cc:find_cc_toolchain.bzl", "find_cpp_toolchain", "use_cc_toolchain")

# Set to -m32 if you run into 64 bit issues.
MACHINE = "-m64"

def _tool(tool, stage):
    if stage != None and stage <= 2:
        return "//cyclone/stage%d/tools/%s" % (stage - 1, tool)
    return "//cyclone/tools/%s" % tool

def _filter_srcs(files, suffixes):
    return [
        src
        for tgt in files
        for src in tgt.files.to_list()
        if any([src.path.endswith(suffix) for suffix in suffixes])
    ]

def _cyc_compile_impl(ctx):
    cc_toolchain = find_cpp_toolchain(ctx)
    feature_configuration = cc_common.configure_features(
        ctx = ctx,
        cc_toolchain = cc_toolchain,
        requested_features = ctx.features,
        unsupported_features = ctx.disabled_features,
    )
    c_compiler_path = cc_common.get_tool_for_action(
        feature_configuration = feature_configuration,
        action_name = C_COMPILE_ACTION_NAME,
    )

    cyclone = ctx.executable.cyclone

    per_file_cycopts = ctx.attr.per_file_cycopts

    if ctx.attr.stage:
        for_boot = " [stage %s]" % ctx.attr.stage
        stage_defs = ["-DCYC_STAGE=%d" % ctx.attr.stage]
    else:
        for_boot = ""
        stage_defs = []

    if ctx.attr.stage == 1:
        libc = "/cyclone/stage1/library/std/libc"
    else:
        libc = "/cyclone/library/std/libc"

    srcs = _filter_srcs(ctx.attr.srcs, [".cyc"])
    hdrs = _filter_srcs(ctx.attr.srcs, [".h"])
    incs = _filter_srcs(ctx.attr.srcs, [".inc"])
    outs = []

    # Also add all transitive headers from deps to the environment.
    dep_hdrs = [
        dep_hdr
        for dep in ctx.attr.deps
        if CcInfo in dep
        for dep_hdr in dep[CcInfo].compilation_context.headers.to_list()
    ]

    for src in srcs:
        basename = src.basename[:-4]
        c_file = ctx.actions.declare_file("%s.c" % basename)
        cyp_file = ctx.actions.declare_file("%s.cyp" % basename)
        inc_files = [inc for inc in incs if inc.basename.startswith(basename)]
        outs.extend([
            c_file,
            cyp_file,
        ])
        ctx.actions.run(
            outputs = [cyp_file],
            inputs = depset(
                hdrs + dep_hdrs + [src] + inc_files,
                transitive = [cc_toolchain.all_files],
            ),
            executable = c_compiler_path,
            arguments = stage_defs + [
                "-xc",
                "-E",
                "-CC",
                "-nostdinc",
                "-Wno-unicode",
                "-iquote",
                ctx.genfiles_dir.path,
                "-iquote",
                ".",
                "-isystem",
                ctx.genfiles_dir.path + libc,
                "-o",
                cyp_file.path,
                src.path,
            ],
            mnemonic = "Preprocessing",
            progress_message = "Preprocessing Cyclone file " + src.path + for_boot,
        )
        ctx.actions.run(
            outputs = [c_file],
            inputs = [cyp_file],
            tools = [cyclone],
            executable = cyclone.path,
            arguments = per_file_cycopts.get(src.basename, []) + [
                # Instantiate type vars instead of introducing new ones.
                "--cifc-inst-tvar",

                # Construct better loop invariants within vcgen analysis.
                "--better-widen",

                # Do not lower the C code.
                # "--no-lower",
                # "-no-seq-c",

                # Don't expand typedefs in pretty printing.
                # "-noexpandtypedefs",

                # Activate the link-checker.
                # "-ic",

                # Use interprocedural type inference.
                # "--inf",

                # Pretty print the C code that Cyclone generates.
                "-pp",
                "-o",
                c_file.path,
                cyp_file.path,
            ] + ctx.attr.cycopts,
            mnemonic = "Cyclone",
            progress_message = "Compiling Cyclone file " + src.path + for_boot,
        )

    return DefaultInfo(files = depset(outs))

_cyc_compile = rule(
    attrs = {
        "srcs": attr.label_list(allow_files = [
            ".cyc",
            ".h",
        ]),
        "cyclone": attr.label(
            executable = True,
            cfg = "exec",
            allow_single_file = True,
        ),
        "cycopts": attr.string_list(),
        "per_file_cycopts": attr.string_list_dict(),
        "stage": attr.int(),
        "deps": attr.label_list(),
    },
    fragments = ["cpp"],
    implementation = _cyc_compile_impl,
    toolchains = use_cc_toolchain(),
)

def _cyc_build(cc_rule, name, srcs = [], csrcs = [], deps = [], cdeps = [], cycopts = [], linkopts = [], stage = None, per_file_cycopts = {}, **kwargs):
    srcs_name = "%s_srcs" % name
    _cyc_compile(
        name = srcs_name,
        srcs = srcs,
        cyclone = _tool("cyclone", stage),
        cycopts = cycopts,
        per_file_cycopts = per_file_cycopts,
        stage = stage,
        tags = ["no-cross"],
        deps = deps,
    )

    kwargs["copts"] = kwargs.get("copts", []) + [MACHINE]

    if csrcs:
        clib_name = "%s_clib" % name
        cc_library(
            name = clib_name,
            srcs = csrcs,
            copts = kwargs["copts"],
            linkopts = linkopts + [MACHINE],
            tags = ["no-cross"],
            deps = cdeps + deps + [
                "//cyclone/library/std/cyc-lib",
            ],
        )

        deps = deps + [":" + clib_name]

    cc_rule(
        name = name,
        srcs = [":" + srcs_name],
        linkopts = linkopts + [MACHINE],
        tags = ["no-cross"],
        deps = deps + [
            "//cyclone/library/runtime",
            "//cyclone/library/std/cyc-lib",
        ],
        **kwargs
    )

def cyc_binary(**kwargs):
    """Build a Cyclone binary."""
    _cyc_build(cc_binary, **kwargs)

def cyc_library(**kwargs):
    """Build a Cyclone library."""
    _cyc_build(cc_library, **kwargs)

def cyc_test(**kwargs):
    """Build a Cyclone test."""
    _cyc_build(cc_test, **kwargs)

def cyclex(name, src = None, out = None, stage = None):
    """Build a lexer.

    Args:
        name: The name of the rule.
        src: The source file.
        out: The output file.
        stage: The stage of the build.
    """
    tool = _tool("cyclex", stage)
    src = src or "%s.cyl" % name
    out = out or "%s.cyc" % name
    native.genrule(
        name = name,
        srcs = [src],
        outs = [out],
        cmd = "$(location %s) $< $@" % tool,
        tags = ["no-cross"],
        tools = [tool],
    )

def cycyacc(name, src, stage = None):
    """Build a parser.

    Args:
        name: The name of the rule.
        src: The source file.
        stage: The stage of the build.
    """
    tool = _tool("bison", stage)
    out_cyc = "%s.cyc" % name
    out_hdr = "%s.h" % name
    native.genrule(
        name = name,
        srcs = [src],
        outs = [
            out_cyc,
            out_hdr,
        ],
        cmd = "$(location %s) -v -d $< -o $(location %s)" % (tool, out_cyc),
        tags = ["no-cross"],
        tools = [tool],
    )

def errorgen(name, src = None, stage = None):
    """Generate error codes.

    Args:
        name: The name of the rule.
        src: The source file.
        stage: The stage of the build.
    """
    tool = _tool("errorgen", stage + 1 if stage != None else None)
    cyclone = _tool("cyclone", stage)

    src = src or name + ".err.cyc"
    out = name + "_gen.h"

    native.genrule(
        name = name,
        srcs = [src],
        outs = [out],
        cmd = " ".join([
            "PATH=$$(dirname $(location %s)):$$PATH" % cyclone,
            "$(location %s)" % tool,
            "$(location %s)" % src,
            ">",
            "$(location %s)" % out,
        ]),
        tags = ["no-cross"],
        tools = [
            cyclone,
            tool,
        ],
    )

def buildlib(name, src, hdrs, stage = None, visibility = None, deps = [], includes = []):
    """Generate Cyclone bindings.

    Args:
        name: The name of the rule.
        src: The source file.
        hdrs: The header files.
        stage: The stage of the build.
        visibility: The visibility of the rule.
        deps: The dependencies.
        includes: The include directories.
    """
    buildlib = _tool("buildlib", stage)

    native.genrule(
        name = name,
        srcs = [src] + deps,
        outs = hdrs + [
            "cstubs.c",
            "cycstubs.cyc",
            "BUILDLIB.LOG",
        ],
        cmd = " ".join([
            "$(location %s)" % buildlib,
            "  -cc $$(echo $(CC) | sed -e \"s|^[^/]|$$PWD/&|\")",
            "  -v",
            " ".join(["-I$$(realpath %s)" % i for i in includes]),
            "  $(location %s) >& BUILDLIB.LOG;" % src,
            "for i in $(OUTS);",
            "  do cp BUILDLIB.OUT/$$(echo $$i | sed -e 's!$(GENDIR)/%s/!!') $$i;" % native.package_name(),
            "done; cat BUILDLIB.LOG",
        ]),
        tags = ["no-cross"],
        tools = [buildlib],
        toolchains = ["@rules_cc//cc:current_cc_toolchain"],
        visibility = visibility,
    )

    native.filegroup(
        name = "%s_hdrs" % name,
        srcs = hdrs,
        visibility = visibility,
    )
