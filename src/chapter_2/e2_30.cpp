#include <iostream>


int main(int argc, char** argv)
{
  int i = 0;

  const int v2 = 0;   //  low level

  int v1 = v2;        //  v1 has no const property

  int *p1 = &v1, &r1 = v1;  //  v1, p1 has no const property

  const int *p2 = &v2, *const p3 = &i, &r2 = v2;  //  p2 has a low level const, p3 has a top level const, r2 has a low level const

  return 0;
}
