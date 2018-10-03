set(_NAME FooBar)
add_library(${_NAME} src/FooBar.cpp include/foobar/FooBar.hpp)
target_include_directories(${_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)
target_link_libraries(${_NAME} PRIVATE Foo)
set_target_properties(${_NAME} PROPERTIES INSTALL_RPATH "$ORIGIN")
