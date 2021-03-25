#include <iostream>


int main(int argc, char** argv)
{
  int i = 0;

  const int v2 = 0;   //  top level

  int v1 = v2;        //  v1 has no const property

  int *p1 = &v1, &r1 = v1;  //  v1, p1 has no const property

  const int *p2 = &v2, *const p3 = &i, &r2 = v2;  //  p2 has a low level const, p3 has a top level const, r2 has a low level const

  /* legal: top level assign to no level*/
  r1 = v2;

  /* illegal: low level to no level */
  // p1 = p2;

  /* legal: no level to low level */
  p2 = p1;

  /* illegal: low level to non level */
  // p1 = p3;

  /* illegal: same low level, top level to non level */
  p2 = p3;

  return 0;
}
