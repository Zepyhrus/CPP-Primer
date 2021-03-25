#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;


int main()
{
  vector<unsigned> scores(11, 0);
  unsigned grade;

  while (cin >> grade) {
    if (grade <= 100) {
      auto it = scores.begin() + grade / 10;

      (*it)++;
    }
  }

  for (auto e : scores)
    cout << e << "\t";
  cout << endl;

  return 0;
}
