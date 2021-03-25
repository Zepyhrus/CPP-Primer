#include <iostream>


int main(int argc, char** argv) {
  /* legal */
  int ival = 1.01;

  /* illegal */
  // int &raval1 = 1.01;

  /* legal */
  int &rval2 = ival;

  /* illegal */
  // int &rval3;
}


