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

    if ctx.attr.stage != None:
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
        cyp_file = ctx.actions.declare_file("%s-pp.cyc" % basename)
        outs.extend([
            c_file,
            cyp_file,
        ])
        ctx.actions.run(
            outputs = [
                cyp_file,
            ],
            inputs = hdrs + dep_hdrs + [src],
            tools = [cyclone],
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
            arguments = [
                # Instantiate type vars instead of introducing new ones.
                "--cifc-inst-tvar",

                # Construct better loop invariants within vcgen analysis.
                "--better-widen",

                # Do not lower the C code.
                #"--no-lower",

                # Don't expand typedefs in pretty printing.
                #"-noexpandtypedefs",

                # Activate the link-checker.
                #"-ic",

                # Use interprocedural type inference.
                #"--inf",

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
        "deps": attr.label_list(),
        "stage": attr.int(),
        "cycopts": attr.string_list(),
        "cyclone": attr.label(
            executable = True,
            cfg = "exec",
            allow_single_file = True,
        ),
    },
    fragments = ["cpp"],
    implementation = _cyc_compile_impl,
    toolchains = use_cc_toolchain(),
)

def _cyc_build(cc_rule, name, srcs = [], csrcs = [], deps = [], cdeps = [], cycopts = [], linkopts = [], stage = None, **kwargs):
    srcs_name = "%s_srcs" % name
    _cyc_compile(
        name = srcs_name,
        srcs = srcs,
        stage = stage,
        cyclone = _tool("cyclone", stage),
        cycopts = cycopts,
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
            deps = cdeps + deps + [
                "//cyclone/library/std/cyc-lib",
            ],
        )

        deps = deps + [":" + clib_name]

    cc_rule(
        name = name,
        srcs = [":" + srcs_name],
        linkopts = linkopts + [MACHINE],
        deps = deps + [
            "//cyclone/library/runtime",
            "//cyclone/library/std/cyc-lib",
        ],
        **kwargs
    )

def cyc_binary(**kwargs):
    _cyc_build(cc_binary, **kwargs)

def cyc_library(**kwargs):
    _cyc_build(cc_library, **kwargs)

def cyc_test(**kwargs):
    _cyc_build(cc_test, **kwargs)

def cyclex(name, src = None, out = None, stage = None):
    tool = _tool("cyclex", stage)
    src = src or "%s.cyl" % name
    out = out or "%s.cyc" % name
    native.genrule(
        name = name,
        srcs = [src],
        outs = [out],
        cmd = "$(location %s) $< $@" % tool,
        tools = [tool],
    )

def cycyacc(name, src, stage = None):
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
        tools = [tool],
    )

def errorgen(name, src = None, stage = None):
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
        tools = [
            cyclone,
            tool,
        ],
    )

def buildlib(name, src, hdrs, stage = None, visibility = None, deps = [], includes = []):
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
            "  -cc '$(CC)'",
            "  -v",
            " ".join(["-I$$(realpath %s)" % i for i in includes]),
            "  $(location %s) >& BUILDLIB.LOG;" % src,
            "for i in $(OUTS);",
            "  do cp BUILDLIB.OUT/$$(echo $$i | sed -e 's!$(GENDIR)/%s/!!') $$i;" % native.package_name(),
            "done; cat BUILDLIB.LOG",
        ]),
        tools = [buildlib],
        toolchains = ["@rules_cc//cc:current_cc_toolchain"],
        visibility = visibility,
    )

    native.filegroup(
        name = "%s_hdrs" % name,
        srcs = hdrs,
        visibility = visibility,
    )
