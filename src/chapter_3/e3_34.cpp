#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
  int ia[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  int *p1 = &ia[4];
  int *p2 = &ia[7];

  p1 += p2 - p1;

  cout << *p1 << endl;

  return 0;
}


