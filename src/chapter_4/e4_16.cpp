#include <iostream>
#include <vector>

using namespace std;

int getPtr()
{
  return 1;
}

int main()
{
  int p;
  int i;

  if (p = getPtr() != 0)
    cout << "Always evaluate getPtr() returns 0 or 1." << endl;

  if (i = 1024)
    cout << "Always true" << endl;

  if ((p = getPtr()) != 0)
    cout << "Get p, and check if the result is 0." << endl;

  if (i == 1024)
    cout << "Check if i equals to 1024." << endl;
  
  return 0;
}
