#include <iostream>

#include "A.hpp"

class B_E : public Interface {
 public:
  std::string getHowToGreet() { return "hello"; }
};
