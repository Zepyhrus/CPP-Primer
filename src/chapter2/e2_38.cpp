#include <iostream>


int main(int argc, char** argv)
{
  /* When the expression to which we apply decltype is a viriabale decltype
   *  returns the type of that varibale, including top-level const and
   *  reference, auto doesn't include top-level const
   * Whet we dereference a pointer , we get the object to which the pointer
   *  points.
   * If the decltype is a reference, then the variable will be a reference
   *  while auto assign the referenced variable type.
   */
  int a = 42;
  int &b = a;

  auto c = b; //  c will be int type
  decltype(b) d = b;  //  d will be int reference type

  return 0;
}
