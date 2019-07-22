#include <iostream>



int main() {
  std::cout << "(a) Who goes with F\145rgus?\012" << std::endl;
  std::cout << "(b) " << 3.14e1L << ": long double" << std::endl;
  /* error: user-defined literal operator not found */
  // std::cout << "(c) " << 1024f << ": float" << std::endl;
  std::cout << "(c) " << 3.14L << ": long double" << std::endl;
}