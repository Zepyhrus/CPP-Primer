#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
  string sa2[10];   // 10 elements array of null

  int ia2[10];

  for (int i = 0; i < 10; ++i) {
    cout << ia2[i] << '\t';
    cout << sa2[i] << '\t' << endl;
  }

  /* Since the size of array is fixed
   * 1. We have to know the size of the array before using it
   * 2. No iterators to be used
   */
  
  return 0;
}


