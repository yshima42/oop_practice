#include <iostream>
#include "A.hpp"

class B : public IB{
 public:
  std::string getHowToGreet() { return "hello"; }
};
