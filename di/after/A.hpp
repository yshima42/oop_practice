#include <iostream>

class IB {
	public:
		virtual std::string getHowToGreet() = 0;
};

class A {
 public:
  void greet(IB *b) {
    std::string greetMessage = b->getHowToGreet();
    std::cout << greetMessage << std::endl;
  }
};
