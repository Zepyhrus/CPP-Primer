#include <string>
#include <cstring>     // equvilent to #include <string.h>
#include <iostream>
#include <vector>
#include <cctype>
#include <iterator>

using namespace std;

int main()
{ 
  vector<int> ivec1 = {0, 1, 2, 3, 4, 5, 6};
  int ia1[ivec1.size()] = {};

  for (int i = 0; i < ivec1.size(); ++i) {
    ia1[i] = ivec1[i];
  }

  for (auto e : ia1)
    cout << e << '\t';
  cout << endl;


  int ia[] = {0, 1, 2, 3, 4, 5};
  vector<int> ivec(ia+1, ia+5);

  for (auto e : ivec)
    cout << e << endl;

  return 0;
}


