#include <iostream>



int main(int argc, char** argv) {

  int n = 12;
  int m = 34;
  int *p1 = &n;
  int *p2 = &m;

  /* change the value of a pointer */
  printf("Pointer before:\t%p\n", p2);
  p2 = &n;
  printf("Pointer after:\t%p\n", p2);


  /* change the value a pointer points */
  printf("Pointer value before:\t%d\n", *p1);
  *p1 = 39;
  printf("Pointer value after:\t%d\n", *p1);

  return 0;
}



