#include <iostream>


int main(int argc, char** argv)
{
  int a = 42;
  const int b = 42;
  int *c = &a;
  int &d = a;
  const int &e = b;


  return 0;
}
