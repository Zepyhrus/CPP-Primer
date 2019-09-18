#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int txt_size() {
  /* txt_size is a function that takes no arguments and returns an int value */

  return 5;
}
  
string sa[10];      // an 10 elements array of null
int ia[10];         // not initialized


int main()
{
  string sa2[10];   // 10 elements array of null

  int ia2[10];

  for (int i = 0; i < 10; ++i) {
    cout << ia2[i] << '\t';
    cout << sa2[i] << '\t' << endl;
  }
  
  return 0;
}


