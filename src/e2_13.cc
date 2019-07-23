#include <iostream>

int i = 42;

int main() {
  int i = 100;
  int j = i;
  int k = ::i;  // the scope rule is overide

  std::cout << j << " " << k << std::endl;

  return 0;
}