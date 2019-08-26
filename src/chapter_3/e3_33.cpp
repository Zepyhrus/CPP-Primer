#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
  constexpr size_t sz = 10;
  int ia[sz];
  vector<int> iv;


  for (int i = 0; i < sz; i++) {
    ia[i] = i;
    iv.push_back(i);
  }
  
  
  for (auto e : iv) {
    cout << e << endl;
  }

  return 0;
}


