#include "fun.hh"

#include <iostream>

int main() {
  std::cout << "The sum of my two favourite numbers is "
            << fun::add(5, 3)
            << ".\n";
}
