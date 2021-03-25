#include <iostream>


int main(int argc, char** argv)
{
  int a = 3, b = 4;

  decltype(a) c = a;
  /* Assignment is an example of an expression that yields a reference type */
  decltype(a = b) d = a;  //  d is a int reference, reference to a
  ++c;
  ++d;

  printf("%d\n", a);  //  a should be 4

  return 0;
}
