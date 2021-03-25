#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
  vector<int> ivec(10);

  vector<int>::size_type cnt = ivec.size();
  cout << cnt << endl;

  for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
    ivec[ix] = cnt;



  for (auto &ix : ivec)
    cout << ix << "\t";
  cout << endl;
}


