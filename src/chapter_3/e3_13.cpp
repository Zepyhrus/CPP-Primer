#include <string>
#include <iostream>
#include <vector>

using namespace std;


int main()
{
  vector<int> v1;             //  none
  vector<int> v2(10);         //  10, 0
  cout << "v2\t";
  for (auto &e : v2)
    cout << e << "\t";
  cout << endl;
  
  vector<int> v3(10, 42);     //  10, 42
  vector<int> v4{10};         //  1, 42
  vector<int> v5{10, 42};     //  2, 10/42
  cout << "v5\t";
  for (auto &e : v5)
    cout << e << "\t";
  cout << endl;

  vector<string> v6{10};      //  10, ""
  cout << "v6\t";
  for (auto &e : v6)
    cout << e << "\t";
  cout << endl;

  vector<string>  v7{10, "hi"}; //  10, "hi"
  cout << "v7\t";
  for (auto &e : v7)
    cout << e << "\t";
  cout << endl;

  return 0;
}
