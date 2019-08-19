#include <string>
#include <iostream>
#include <cctype>

using namespace std;


int main()
{
  string s;

  cout << "Please input:" << endl;

  getline(cin, s);

  /* error: identifier c is not defined */
  for (char &c : s)
    cout << c << endl;
    c = 'X';

  cout << s << endl;
  
  return 0;
}

