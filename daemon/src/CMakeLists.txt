file(GLOB app_srcs CONFIGURE_DEPENDS
    "*.cpp"
)

add_library(app_lib STATIC ${app_srcs})

