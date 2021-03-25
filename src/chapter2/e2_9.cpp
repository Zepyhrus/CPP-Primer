#include <iostream>

int main(int argc, char** argv) {
  // std::cin >> int input_value; // this leads to the error
  int input_value;
  std::cin >> input_value;
  std::cout << "(a) " << input_value << std::endl;

  int i = { 3.14 };
  std::cout << "(b) " << i << std::endl;
  // double salary = wage = 9999.99;  // this leads to the error
  /* wage is not declared */

  double wage;
  double salary = wage = 9999.99;
  std::cout << "(c) " << salary << std::endl;

  int i = 3.14;
  std::cout << "(d) " << i << std::endl;

  return 0;
}
