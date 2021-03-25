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

  cout << strcmp(a, b) << endl;

  return 0;
}


