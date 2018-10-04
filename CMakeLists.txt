cmake_minimum_required(VERSION 3.5)
project(SecondaryDependency VERSION 1.0 LANGUAGES NONE)

set(CMAKE_VERBOSE_MAKEFILE ON)

option(BUILD_SHARED_LIBS "Build shared libraries(.so or .dyld)." ON)

# Layout build dir like install dir
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

enable_language(CXX)
include(CTest)
add_subdirectory(Foo)
add_subdirectory(FooBar)
add_subdirectory(FooBarApp)
