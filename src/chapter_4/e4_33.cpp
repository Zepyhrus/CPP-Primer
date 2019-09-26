#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
  int x = 2, y = 12;

  cout << x << " " << y << endl;

  (x < y) ? (++x, ++y) : (--x, --y);

  cout << x << " " << y << endl;
}


