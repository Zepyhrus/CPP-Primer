#include <string>
#include <iostream>
#include <vector>
#include <cctype>
#include <iterator>

using namespace std;

int main()
{
  int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int equal = 1;

  if (end(a) - begin(a) != end(b) - begin(b)) {
    equal = 0;
  } else {
    size_t sz = end(a) - begin(a);

    for (int i = 0; i < sz; ++i) {
      if (a[i] != b[i]) {
        equal = 0;
      }
    }
  }
  
  if (equal) {
    cout << "Equal!" << endl;
  } else {
    cout << "Not equal!" << endl;
  }
  

  return 0;
}


