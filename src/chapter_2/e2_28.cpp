#include <iostream>


int main(int argc, char** argv)
{
  /* illegal: cp needs a initializer */
  // int i, *const cp;

  /* illegal: p2 needs an initializer */
  // int *pi, *const p2;

  /* illegal: ic needs an initializer */
  // const int ic, &r = ic;

  /* illegal: p3 needs an initializer */
  // const int *const p3;

  /* legal: const int pointer */
  const int *p;

  return 0;
}
