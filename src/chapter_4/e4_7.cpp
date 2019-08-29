#include <iostream>
#include <vector>

using namespace std;

int main()
{ 
  cout << "Overflow refers to a value is out of the range its type"     << endl;
  cout << "could handle while being accessed."                          << endl;
  short upper_bound = 32767;
  short lower_bound = -32768;
  short var = 325;
  short tar = var;

  for (int i = 0; i < var; i++)
    tar *= var;

  cout << "Overflow 1:\t" << ++upper_bound << endl;
  cout << "Overflow 2:\t" << --lower_bound << endl;
  cout << "Overflow 3:\t" << tar           << endl;
  

  return 0;
}
