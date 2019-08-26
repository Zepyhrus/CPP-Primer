#include <string>
#include <cstring>     // equvilent to #include <string.h>
#include <iostream>
#include <vector>
#include <cctype>
#include <iterator>

using namespace std;

int main()
{ 
  int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

  /* 1. Using range for */
  cout << "1. Using rang for:" << endl;
  for (auto &p : ia) {
    for (auto q : p) {
      cout << q << '\t';
    }
    cout << endl;
  }

  /* 2. Using index */
  cout << "2. Using index:" << endl;
  for (auto p = 0; p < 3; ++p) {
    for (auto q = 0; q < 4; ++q) {
      cout << ia[p][q] << '\t';
    }
    cout << endl;
  }

  /* 3. Using pointers */
  cout << "3. Using pointers:" << endl;
  using int_array = int[4];   // new style type alias declaration
  typedef int int_array[4];

  for (auto *p = ia; p != ia + 3; ++p) {
    for (auto *q = *p; q != *p + 4; ++q) {
      cout << *q << '\t';
    }
    cout << endl;
  }


  return 0;
}


