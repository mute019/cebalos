file(GLOB app_srcs
    "*.cpp"
)

add_library(app_lib STATIC ${app_srcs})

