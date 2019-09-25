#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char** argv)
{
  vector<int> iv{1, 2, 3, 4, 5, 6};

  cout << "before\t";
  for (auto &val : iv)
    cout << val << "\t";
  cout << endl;

  for (auto &val : iv)
    val = (val % 2 == 1) ? val * 2 : val;

  cout << "after\t";
  for (auto &val : iv)
    cout << val << "\t";
  cout << endl;


}



