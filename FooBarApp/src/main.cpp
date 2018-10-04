#include <iostream>
#include <foobar/FooBar.hpp>

int main(int argc, char** argv) {
  const int level = 1;
  std::cout << "[" << level << "] Enter FooBarApp" << std::endl;
	foobar::FooBar::Hello(level+1);
  std::cout << "[" << level << "] Exit FooBarApp" << std::endl;
	return 0;
}
