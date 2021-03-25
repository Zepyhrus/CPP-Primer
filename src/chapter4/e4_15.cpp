#include <iostream>
#include <vector>

using namespace std;

int main()
{
  double dval; 
  int ival;
  int *pi;
  // dval = ival = pi = 0;
  cout << "error: int* could not be assigned to int!" << endl;

  dval = ival = *pi = 0;
  cout << "The right way to assign it." << endl;
  
  return 0;
}
