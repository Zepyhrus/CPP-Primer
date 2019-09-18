#include <string>
#include <cstring>     // equvilent to #include <string.h>
#include <iostream>
#include <vector>
#include <cctype>
#include <iterator>

using namespace std;

int main()
{
  char a[] = "Alpha";
  char b[] = "Beta";

  size_t sz = 256;

  char sum[sz] = {};

  strcpy(sum, a);
  strcat(sum, " ");
  strcat(sum, b);

  cout << sum << endl;
  for (auto e : sum) {
    cout << e;
  }
  cout << endl;

  return 0;
}


