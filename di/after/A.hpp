#pragma once
#include <iostream>

class Interface {
 public:
  virtual std::string getHowToGreet() = 0;
};

class A {
 public:
  void greet(Interface *i) {
    std::string greetMessage = i->getHowToGreet();
    std::cout << greetMessage << std::endl;
  }
};
