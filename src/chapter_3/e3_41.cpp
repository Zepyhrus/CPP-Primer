#include <string>
#include <cstring>     // equvilent to #include <string.h>
#include <iostream>
#include <vector>
#include <cctype>
#include <iterator>

using namespace std;

int main()
{
  int ia[] = {0, 1, 2, 3, 4, 5};

  vector<int> ivec(ia+1, ia+5);

  for (auto e : ivec)
    cout << e << endl;

  return 0;
}


