#include <iostream>


int main(int argc, char** argv)
{
  int i = 42;
  int &r1 = i;      
  const int &r2 = i;
  r1 = 0;     //  this also changes r2
  // r2 = 0;           

  printf("%d\n", r2);

  return 0;
}
