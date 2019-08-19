#include <string>
#include <iostream>
#include <vector>

using namespace std;


int main()
{
  /* Exercise 3.16 */
  vector<int> v1;             //  none
  cout << "size of v1\t";
  cout << v1.size() << endl;
  cout << "v1\t";
  for (auto &e : v1)
    cout << e << "\t";
  cout << endl;

  vector<int> v2(10);         //  10, 0
  cout << "size of v2\t";
  cout << v2.size() << endl;
  cout << "v2\t";
  for (auto &e : v2)
    cout << e << "\t";
  cout << endl;
  
  vector<int> v3(10, 42);     //  10, 42
  cout << "size of v3\t";
  cout << v3.size() << endl;
  cout << "v2\t";
  for (auto &e : v3)
    cout << e << "\t";
  cout << endl;

  vector<int> v4{10};         //  1, 42
  cout << "size of v4\t";
  cout << v4.size() << endl;
  cout << "v4\t";
  for (auto &e : v4)
    cout << e << "\t";
  cout << endl;

  vector<int> v5{10, 42};     //  2, 10/42
  cout << "size of v5\t";
  cout << v5.size() << endl;
  cout << "v5\t";
  for (auto &e : v5)
    cout << e << "\t";
  cout << endl;

  vector<string> v6{10};      //  10, ""
  cout << "size of v6\t";
  cout << v6.size() << endl;
  cout << "v6\t";
  for (auto &e : v6)
    cout << e << "\t";
  cout << endl;

  vector<string>  v7{10, "hi"}; //  10, "hi"
  cout << "size of v7\t";
  cout << v7.size() << endl;
  cout << "v7\t";
  for (auto &e : v7)
    cout << e << "\t";
  cout << endl;


  return 0;
}
