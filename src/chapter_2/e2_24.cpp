#include <iostream>



int main(int argc, char** argv) {
  int i = 42;

  /* void pointer could be any type of pointer */
  void *p = &i;

  /* different types */
  // long *lp = &i;

  int * p1, p2;

  p1 = &i;
  p2 = 12;

  printf("%p\n", p1);
  printf("%d\n", p2);


  return 0;
}



