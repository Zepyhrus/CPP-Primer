#include <iostream>

/* (a): illegal */
// int double = 3.14;


/* (b): legal */
int _;

/* (c): illegal */
// int catch-22;

/* (d): illegal */
// int 1_or_2 = 1;


/* (e):  */
double Double = 3.14;

int main() {
  std::cout << _ << std::endl;
  std::cout << Double << std::endl;
  return 0;
}