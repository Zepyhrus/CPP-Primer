#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;

int main(int argc, char **argv)
{
  char cval = 'c';
  int ival  = 12;
  unsigned int ui = 1;
  float fval = 1.0;
  double dval = 2.0;

  /* a */
  cval = 'a' + 3;             // char to int and int to char
  cout << cval << endl;

  /* b */
  fval = ui - ival * 1000.0;     // 
  cout << fval << endl;
  cout << typeid(1.0).name() << endl;
  cout << typeid(fval).name() << endl;


  /* c */
  dval = ui * fval;       // promoted to long 
  cout << dval << endl;


  /* d */
  cval = ival + fval + dval;  // double to int to char
  cout << cval << endl;
}


