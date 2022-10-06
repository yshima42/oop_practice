#include <iostream>

#include "B.hpp"

class A {
 public:
  void greet() {
    B b;
    std::string greetMessage = b.getHowToGreet();
    std::cout << greetMessage << std::endl;
  }
};
