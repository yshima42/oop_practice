#include <iostream>

#include "A.hpp"

class B_J : public Interface {
 public:
  std::string getHowToGreet() { return "こんにちは"; }
};
