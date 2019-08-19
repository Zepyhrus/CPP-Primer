#include <string>
#include <iostream>
#include <cctype>

using namespace std;


int main()
{
  string s;

  cout << "Please input:" << endl;

  getline(cin, s);

  for (auto &c : s)
    c = 'X';

  cout << s << endl;
  
  return 0;
}

