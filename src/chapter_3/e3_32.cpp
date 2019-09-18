#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
  constexpr size_t sz = 10;
  int ia[sz];

  for (int i = 0; i < sz; i++)
    ia[i] = i;

  cout << ia << endl;

  return 0;
}


