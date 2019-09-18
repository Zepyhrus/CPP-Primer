#include <string>
#include <iostream>
#include <vector>

using namespace std;


int main()
{
  vector<string> text;
  string input;

  while ( getline(cin, input) )
  {
    text.push_back(input);
  }

  for (auto it = text.begin(); it != text.end(); it++) {
    for (auto c = it->begin(); c != it->end(); c++) {
      *c = toupper(*c);
    }

    cout << *it << endl;
  }

  return 0;
}
