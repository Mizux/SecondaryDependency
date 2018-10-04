[![Build Status](https://travis-ci.com/Mizux/SecondaryDependency.svg?branch=master)](https://travis-ci.com/Mizux/SecondaryDependency)
# SecondaryDependency
Test C++/CMake secondary dependency when using:
```cmake
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
```
# Status
Seems to work with `binutils >= 2.30` (alpine, debian-9, ubuntu-18.04) but can't found relevant information

Otherwise (centos-7 (**2.27.28**), ubuntu-14.04 (**2.24**), ubuntu-16.04 (**2.26.1**)) you have something like this:
```shell
$ cmake -H. -Bbuild
...
$ cmake --build build
...
[ 83%] Linking CXX executable ../bin/FooBarApp
cd /project/cache/ubuntu-16.04/build/FooBarApp && /usr/bin/cmake -E cmake_link_script CMakeFiles/FooBarApp.dir/link.txt --verbose=1
/usr/bin/c++ CMakeFiles/FooBarApp.dir/src/main.cpp.o  -o ../bin/FooBarApp ../lib/libFooBar.so -Wl,-rpath,"\$ORIGIN/../lib" 
/usr/bin/ld: warning: libFoo.so, needed by ../lib/libFooBar.so, not found (try using -rpath or -rpath-link)
../lib/libFooBar.so: undefined reference to `foo::Foo::Hello(int)'
collect2: error: ld returned 1 exit status
FooBarApp/CMakeFiles/FooBarApp.dir/build.make:98: recipe for target 'bin/FooBarApp' failed
```

# References
http://www.kaizou.org/2015/01/linux-libraries/
