set(_NAME Foo)
add_library(${_NAME})
target_sources(${_NAME}
  PRIVATE src/Foo.cpp
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/foo/Foo.hpp
)
target_include_directories(${_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
