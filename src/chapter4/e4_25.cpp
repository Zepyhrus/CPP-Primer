#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(int argc, char **argv)
{
  bitset<8> a(~'q' << 6);
  bitset<8> b('q');
  bitset<8> c(~'q');

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
}
