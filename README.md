[![Build Status](https://travis-ci.com/Mizux/SecondaryDependency.svg?branch=master)](https://travis-ci.com/Mizux/SecondaryDependency)
# SecondaryDependency
Test C++/CMake secondary dependency when using:
```cmake
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
```
# Status
Seems to work with binutils >= 2.30 but can't found relevant information

# References
http://www.kaizou.org/2015/01/linux-libraries/
