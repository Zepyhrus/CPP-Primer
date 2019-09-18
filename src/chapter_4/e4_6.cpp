#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int input;

  while ( cin >> input)
  {
    cout << input << ":\t";
    if (input % 2) 
      cout << "odd" << endl;
    else
      cout << "even" << endl;
  }
  

  return 0;
}
