#include <iostream>



int main(int argc, char** argv) {
  int i = 0, &ri = i; 
  i = 5; ri = 10;

  std::cout << i << " " << ri << std::endl;
}



