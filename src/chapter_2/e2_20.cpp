#include <iostream>



int main(int argc, char** argv) {
  int i = 42;

  int *p1 = &i;

  *p1 = *p1 * *p1;   // i = i * i

  printf("Result:\t%d\n", *p1); //  the reslut should be 1764

  return 0;
}



