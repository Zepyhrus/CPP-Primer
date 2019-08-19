#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;


int main()
{
  vector<int> v1{1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};

  for (int i = 0; i < v1.size() - 1; ++i) {
    cout << v1[i] + v1[i+1] << endl;
  }

  cout << "Here we go:\n";
  for (int i = 0; i < v1.size(); ++i) {
    cout << v1[i] + v1[v1.size() - 1 - i] << endl;
  }
  
}
