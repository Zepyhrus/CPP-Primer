#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;


int main()
{
  vector<int> v1(10, 42);
  cout << "v1\t";
  for (auto &e : v1)
    cout << e << "\t";
  cout << endl;


  vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
  cout << "v2\t";
  for (auto &e : v2)
    cout << e << "\t";
  cout << endl;
  
  vector<int> v3(v2);
  cout << "v3\t";
  for (auto &e : v3)
    cout << e << "\t";
  cout << endl;
  
  
}
