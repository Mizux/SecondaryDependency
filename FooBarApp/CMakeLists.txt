set(_NAME FooBarApp)
add_executable(${_NAME} src/main.cpp)
set_target_properties(${_NAME} PROPERTIES INSTALL_RPATH "$ORIGIN/../lib")
target_link_libraries(${_NAME} PRIVATE ${PROJECT_NAME}::FooBar)
