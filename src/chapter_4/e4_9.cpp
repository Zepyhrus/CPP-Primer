#include <iostream>
#include <vector>

using namespace std;

int main()
{ 
  
  const char *cp = "Hello world";

  if (cp && *cp)
    cout << "True" << endl;
  else
  {
    cout << "False" << endl;
  }
  
  cout << "If cp is a null pointer and if cp points to a null literal string"
    <<endl;

  return 0;
}
