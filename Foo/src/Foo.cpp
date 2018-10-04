#include <foo/Foo.hpp>

#include <iostream>

namespace foo {
	void Foo::Hello(int level) {
  std::cout << "[" << level << "] Enter Foo" << std::endl;
  std::cout << "[" << level << "] Exit Foo" << std::endl;
}
}

