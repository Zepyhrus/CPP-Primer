#include <iostream>
#include <vector>

using namespace std;

int main()
{ 
  int i;
  double d;

  d = i = 3.5;
  cout << "d should be 3.0 while " << d << endl;
  cout << "i should be 3 while " << i << endl;

  i = d = 3.5;
  cout << "d should be 3.5 while " << d << endl;
  cout << "i should be 3 while " << i << endl;
  
  return 0;
}
