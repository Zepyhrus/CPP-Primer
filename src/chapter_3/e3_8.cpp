#include <string>
#include <iostream>
#include <cctype>

using namespace std;


int main()
{
  string s;

  cout << "Please input:" << endl;

  getline(cin, s);

  string s1(s);

  decltype(s1.size()) n = 0;
  while (n < s1.size())
  {
    s1[n] = 'X';
    n++;
  }
  cout << "While loop:\t" << s1 << endl;

  string s2(s);

  decltype(s2.size()) n2;
  for (n2 = 0; n2 < s2.size(); n2++) {
    s2[n2] = 'X';
  }
  cout << "Traditional for loop:\t" << s2 << endl;

  
  return 0;
}
