#include <iostream>


int main(int argc, char** argv)
{
  int i = 0;
  int *const p1 = &i;
  const int ci = 42;
  const int *p2 = &ci;
  const int *const p3 = p2;

  const int &r = ci;

  /* legal: assigning a non const to const */
  i = ci;

  /* illegal: p1 must be modifiable */
  // p1 = p3;

  /* illegal: p1 must be modifiable */
  // p1 = &ci;

  /* illegal: p3 must be modifiable */
  // p3 = &ci;

  /* legal: assign a const int pointer to a pointer pointing to const */
  p2 = p1;

  /* illegal: ci must be modifiable */
  // ci = *p3;

  return 0;
}
