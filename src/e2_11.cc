#include <iostream>

extern int ix = 1024;  // this defination is legal


int main() {
  /* (a) error: an initializer is not allowed on a local decaration of an extern varibale */
  // extern int ix = 1024;

  /* (b): inside a function, this is a declaration. */
  int iy;

  /* (c): inside a function, this is a declaration. */
  extern int iz;

  return 0;
}