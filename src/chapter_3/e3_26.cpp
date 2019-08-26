#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;


int main()
{
  vector<string> text;
  string input;
  string sought;

  cout << "Please input word:\n";
  while (cin >> input)
  {
    text.push_back(input);
  }

  cout << "Please input your target:\n";
  cin >> sought;
  
  auto beg = text.begin(), end = text.end();
  auto mid = text.begin() + (end - beg) / 2;
  // auto mid = (end + beg) / 2;

  while (mid != end && *mid != sought) {
    if (sought < *mid) {
      end = mid;
    } else {
      beg = mid + 1;
    }

    mid = beg + (end - beg) / 2;
    /* This is illegal: there is no operas for iteror + iteror */
    // mid = (end + beg) / 2;
  }

  cout << endl;

  return 0;
}
