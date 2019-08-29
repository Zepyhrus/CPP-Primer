#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int i = 42;
  
  // if (42 = i) { cout << "error" << endl; }  // error

  if (i = 42) { cout << "True" << endl; }   // true
  
  return 0;
}
