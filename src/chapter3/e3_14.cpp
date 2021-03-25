#include <string>
#include <iostream>
#include <vector>

using namespace std;


int main()
{
  int input;
  vector<int> store;

  cout << "Take integer inputs:\n";
  while (cin >> input)
  {
    store.push_back(input);
  }

  cout << "Output the result:\n";
  for (auto &e : store)
    cout << e << endl;

  return 0;
}
