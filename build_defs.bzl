"""Build rules and macros for building Cyclone programs."""

load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

def _filter_srcs(files, suffixes):
    return [
        src
        for tgt in files
        for src in tgt.files.to_list()
        if any([src.path.endswith(suffix) for suffix in suffixes])
    ]

def _cyc_compile_impl(ctx):
    cyclone = ctx.executable.cyclone

    if ctx.attr.boot:
        for_boot = " [boot]"
    else:
        for_boot = ""

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
            executable = "clang",
            arguments = [
                "-nostdinc",
                "-xc",
                "-E",
                "-CC",
                "-nostdinc",
                "-iquote",
                ctx.genfiles_dir.path,
                "-iquote",
                ".",
                "-isystem",
                ctx.genfiles_dir.path + "/cyclone/library/std/libc",
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
        "boot": attr.bool(mandatory = True),
        "cycopts": attr.string_list(),
        "cyclone": attr.label(
            executable = True,
            cfg = "host",
            allow_single_file = True,
        ),
    },
    fragments = ["cpp"],
    output_to_genfiles = True,
    implementation = _cyc_compile_impl,
)

def _tool(tool, boot):
    if boot:
        return "//cyclone/boot/tools/%s" % tool
    else:
        return "//cyclone/tools/%s" % tool

def _cyc_build(cc_rule, name, srcs = [], csrcs = [], boot_srcs = [], deps = [], cycopts = [], linkopts = [], boot = False, **kwargs):
    if srcs:
        _cyc_compile(
            name = name + "_srcs",
            srcs = srcs,
            boot = boot,
            cyclone = _tool("cyclone", boot),
            cycopts = cycopts,
            deps = deps,
        )

        boot_srcs = boot_srcs + [":%s_srcs" % name]

    kwargs["copts"] = kwargs.get("copts", []) + ["-m32"]

    if csrcs:
        cc_library(
            name = name + "_clib",
            srcs = csrcs,
            copts = kwargs["copts"],
            linkopts = linkopts + ["-m32"],
            deps = deps + [
                "//cyclone/library/std/cyc-lib",
            ],
        )

        deps = deps + [":%s_clib" % name]

    kwargs["copts"].append("-w")

    cc_rule(
        name = name,
        srcs = boot_srcs,
        linkopts = linkopts + ["-m32"],
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

def cyclex(name, src = None, out = None):
    src = src or name + ".cyl"
    out = out or name + ".cyc"
    native.genrule(
        name = name,
        srcs = [src],
        outs = [out],
        cmd = "$(location //cyclone/boot/tools/cyclex) $< $@",
        tools = ["//cyclone/boot/tools/cyclex"],
    )

def cycyacc(name, src):
    native.genrule(
        name = name,
        srcs = [src],
        outs = [
            name + ".cyc",
            name + ".h",
        ],
        cmd = "$(location //cyclone/boot/tools/bison) -v -d $< -o $(location %s.cyc)" % name,
        tools = ["//cyclone/boot/tools/bison"],
    )

def errorgen(name):
    native.genrule(
        name = name,
        srcs = [name + ".err.cyc"],
        outs = [name + "_gen.h"],
        cmd = " ".join([
            "PATH=$$(dirname $(location //cyclone/boot/tools/cyclone)):$$PATH",
            "$(location //cyclone/tools/errorgen)",
            "$(location %s.err.cyc)" % name,
            ">",
            "$(location %s_gen.h)" % name,
        ]),
        tools = [
            "//cyclone/boot/tools/cyclone",
            "//cyclone/tools/errorgen",
        ],
    )

def buildlib(name, src, hdrs, boot = False, visibility = None):
    buildlib = _tool("buildlib", boot)

    native.genrule(
        name = name,
        srcs = [
            src,
            "//cyclone/library/std/cyc-lib:cycspecs",
        ],
        outs = hdrs + [
            "cstubs.c",
            "cycstubs.cyc",
            "BUILDLIB.LOG",
        ],
        cmd = " ".join([
            "$(location %s)" % buildlib,
            "  -B$(location //cyclone/library/std/cyc-lib:cycspecs)/../..",
            "  $(location %s) >& BUILDLIB.LOG;" % src,
            "for i in $(OUTS);",
            "  do cp BUILDLIB.OUT/$$(echo $$i | sed -e 's!$(GENDIR)/%s/!!') $$i;" % native.package_name(),
            "done; cat BUILDLIB.LOG",
        ]),
        tools = [buildlib],
        visibility = visibility,
    )

    native.filegroup(
        name = "%s_hdrs" % name,
        srcs = hdrs,
        visibility = visibility,
    )
