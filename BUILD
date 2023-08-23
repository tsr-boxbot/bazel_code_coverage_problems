cc_library(
    name = "add",
    srcs = [
        "add.cpp",
    ],
    hdrs = [ "add.h" ]
)

cc_test(
    name = "add_test",
    srcs = [
        "add.test.cpp",
    ],
    deps = [
        "//:add",
        "@com_google_googletest//:gtest_main",
    ],
)
