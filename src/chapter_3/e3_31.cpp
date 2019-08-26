#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
  constexpr size_t array_size = 10;
  int ia[array_size];

  for (size_t ix = 1; ix <= array_size - 1; ++ix)
    ia[ix] = ix;    // when ix = 10, return out of boundary error

  return 0;
}


