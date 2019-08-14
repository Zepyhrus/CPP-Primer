#include <iostream>


int main(int argc, char** argv)
{
  int a = 3, b = 4;

  decltype(a) c = a;
  decltype((b)) d = a;  //  d is a int reference, reference to a
  ++c;
  ++d;

  printf("%d\n", a);  //  a should be 4

  return 0;
}
