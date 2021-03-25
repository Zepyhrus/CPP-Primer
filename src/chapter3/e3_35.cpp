#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <iterator>

using namespace std;

int main()
{
  int ia[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  const int *pbeg = begin(ia), *pend = end(ia);

  int *p1 = ia;

  for (; p1 != pend; p1++) {
    *p1 = 0;
  }

  for (auto p = pbeg; p != pend; p++) {
    cout << *p << endl;
  }

  return 0;
}


