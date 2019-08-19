#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;


int main()
{
  string input;
  vector<string>  svec;

  while (cin >> input)
  {
    svec.push_back(input);
  }

  cout << "Result:" << endl;
  cout << "The size of the vector is:\t" << svec.size() << endl;
  for (int i = 0; i < svec.size(); ++i) {
    for (auto &c : svec[i]) {
      c = toupper(c);
    }

    cout << svec[i] << "\t";

    if ((i % 8) == 7) {
      cout << endl;
    }
  }
  
  cout << endl;
}