#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
  string input;
  cout << "Read line version:" << endl;
  while (getline(cin, input))
  {
    cout << input << endl;
  }
  
  cout << "Read word version:" << endl;
  while (cin >> input)
  {
    cout << input << endl;
  }
  

  return 0;
}


