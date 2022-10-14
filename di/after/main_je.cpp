#include "B_E.hpp"
#include "B_J.hpp"

int main() {
  Interface *i = new B_E;
  Interface *ij = new B_J;
  A a;
  a.greet(i);
  a.greet(ij);
}
