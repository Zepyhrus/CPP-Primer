#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
  unsigned char bits = 0145, b1 = 0145, b2 = 0257;

  
  unsigned int k = bits;
  cout << bits << endl;

  cout << k << endl;

  k = ~bits;
  cout << k << endl;

  k = bits << 8;
  cout << k << endl;

  k = bits << 31;
  cout << k << endl;

  k = bits >> 3;
  cout << k << endl;

  k = b1 & b2;
  cout << k << endl;

  k = b1 ^ b2;
  cout << k << endl;

  k = b1 | b2;
  cout << k << endl;
}
