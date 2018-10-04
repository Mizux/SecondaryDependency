#include <foobar/FooBar.hpp>

#include <iostream>
#include <foo/Foo.hpp>

namespace foobar {

void FooBar::Hello(int level) {
  std::cout << "[" << level << "] Enter FooBar" << std::endl;
	foo::Foo::Hello(level+1);
  std::cout << "[" << level << "] Exit FooBar" << std::endl;
}
}

