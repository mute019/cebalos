# Setting the daemon BINARY path
# In case, I forget let me refer to the below links  
# link 1: https://stackoverflow.com/questions/65637482/how-are-cmake-source-dir-and-cmake-binary-dir-set
# link 2: https://stackoverflow.com/questions/6594796/how-do-i-make-cmake-output-into-a-bin-dir

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})


add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src)

set(TARGET_BIN "eze-battery-manger")


target_include_directories(app_lib PUBLIC include)

add_executable(${TARGET_BIN} app/main.cpp)

target_link_libraries(${TARGET_BIN} app_lib)