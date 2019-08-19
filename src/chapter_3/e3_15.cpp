#include <string>
#include <iostream>
#include <vector>

using namespace std;


int main()
{
  string input;
  vector<string> svec;

  cout << "Take string inputs:\n";
  while (cin >> input)
  {
    svec.push_back(input);
  }

  cout << "Output the result:\n";
  for (auto &e : svec)
    cout << e << endl;

  return 0;
}
