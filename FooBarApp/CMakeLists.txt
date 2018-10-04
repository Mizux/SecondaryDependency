set(_NAME FooBarApp)
add_executable(${_NAME} src/main.cpp)
set_target_properties(${_NAME} PROPERTIES INSTALL_RPATH "$ORIGIN/../lib")
target_link_libraries(${_NAME} PRIVATE FooBar)

if (BUILD_TESTING)
  add_test(NAME FooBarApp_UT COMMAND FooBarApp)
endif()
