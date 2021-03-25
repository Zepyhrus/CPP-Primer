#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(int argc, char **argv)
{
  unsigned long ul1 = 3, ul2 = 7;
  bitset<4> res;

  res = ul1 & ul2;
  cout << res << endl;

  res = ul1 & ul2;
  cout << res << endl;

  res = ul1 && ul2;
  cout << res << endl;

  res = ul1 || ul2;
  cout << res << endl;
}
