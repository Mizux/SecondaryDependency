#include <foobar/FooBar.hpp>

#include <iostream>
#include <foo/Foo.hpp>

namespace foobar {
  void fooBarHello() {
    std::cout << "fooBarHello" << std::endl;
  }

void FooBar::operator()() const {
	foo::Foo foo;
	std::cout << foo() << std::endl;
}
}

