#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
  constexpr int size = 5;

  int ia[size] = {1, 2, 3, 4, 5};
  int ix, *ptr;


  for (ptr = ia, ix = 0;
  ix != size && ptr != ia+size;
  ++ix, ++ptr)
  {
    cout << ix << " " << ptr << endl;
  }
}


