package(default_visibility = ["//visibility:public"])

cc_library(
    name = "server",
    srcs = glob(["src/nativeplanet/server/*.cpp"]),
    hdrs = glob(["include/nativeplanet/server/*.hpp"]),
)

cc_library(
    name = "game",
    srcs = glob(["src/nativeplanet/game/*.cpp"]),
    hdrs = glob(["include/nativeplanet/game/*.hpp"]),
)

cc_binary(
    name = "client",
    srcs = glob(["src/nativeplanet/client/*.cpp"]),
    linkopts = ["-lsfml-window",
                "-lsfml-system",
                "-lsfml-graphics"]
)
