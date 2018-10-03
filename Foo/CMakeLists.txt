set(_NAME Foo)
add_library(${_NAME} src/Foo.cpp include/foo/Foo.hpp)
target_include_directories(${_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)
