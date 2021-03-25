#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;

int main(int argc, char **argv)
{
  int i = 111;
  double d = 12.5;
  const string *ps = new string("I love you babe");
  char *pc = "d";
  void *pv;

  // (a) pv = (void*) ps;
  pv = static_cast<void*>(const_cast<string*>(ps));

  string *fs = static_cast<string*>(pv);

  cout << *fs << endl;
  
  // (b) i = int(*pc)
  i = static_cast<int>(*pc);

  cout << i << endl;

  // (c) pv = &d
  pv = static_cast<void*>(&d);

  cout << *static_cast<double*>(pv) << endl;

  // (d) pc = (char*) pv;
  char *tpc = "tpc";
  pv = static_cast<void*>(tpc);

  pc = static_cast<char*>(pv);

  cout << *pc << endl;

  return 0;
}


