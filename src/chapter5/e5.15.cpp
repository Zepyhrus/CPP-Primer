#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv) {
  // 5.15 (a)
  int sz = 10;
  for (int ix = 0; ix != sz; ++ix) {
    ; // do nothing
  }

  // if (ix != sz)
  //    ...
  //    This is illegal because ix in only avaiable in the for loop scope

  // 5.15 (b)
  // int ix;  // ix is declared without initialization
  int ix = 0;

  for (/* doing nothing here */; ix != sz; ++ix) { /* ... */ }

  // 5.15 (c)
  for (int ix = 0; ix != sz; ++ix /*, ++sz */) { /* ... */ }


  return 0;
}