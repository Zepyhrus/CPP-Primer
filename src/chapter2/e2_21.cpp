#include <iostream>



int main(int argc, char** argv) {
  int i = 0;

  /* illegal: you can't assign a int pointer to a double pointer */
  // double* dp = &i;

  /* illegal: you can't assign a int variable to a int pointer */
  // int *ip = i;

  /* legal */
  int *p = &i;


  return 0;
}



