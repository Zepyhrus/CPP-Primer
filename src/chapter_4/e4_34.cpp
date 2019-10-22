#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;

int main(int argc, char **argv)
{
  float fval = 1.0;
  double dval = -3.14;
  unsigned ival = dval;
  char cval = 'c';

  cout << ival << endl;
  cout << typeid(ival).name() << endl;

  /* a */
  if (fval) cout << true << endl; // float is converted to bool
  else cout << false << endl;

  /* b */
  dval = fval + ival; // float is promoted to double, and integer is converted to double

  /* c */
  cout << dval + ival * cval << endl; // char is converted to integer and then converted to double


  return 0;
}


