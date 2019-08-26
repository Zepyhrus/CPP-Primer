#include <string>
#include <iostream>
#include <vector>

using namespace std;


int main()
{
  vector<int> v(10);

  for (auto it = v.begin(); it != v.end(); it++) {
    cin >> *it;
  }

  /* Print original vector */
  cout << "Original vector:\t";
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << "\t";
  }
  cout << endl;

  /* Print double vector */
  cout << "Double vector:\t\t";
  for (auto it = v.begin(); it != v.end(); it++) {
    *it = 2 * *it;
    cout << *it << "\t";
    cout << it - v.begin() << "\t";
  }
  cout << endl;

  return 0;
}
