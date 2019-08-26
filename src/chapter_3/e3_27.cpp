#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int txt_size() {
  /* txt_size is a function that takes no arguments and returns an int value */

  return 5;
}


int main()
{
  unsigned buf_size = 1024;

  /* (a) legal */
  int ia0[buf_size];

  /* (b) legal */
  int ia1[4 * 7 - 14];

  /* (c) legal */
  int ia2[txt_size()];

  /* (d) illegal, 12 cannot be assigned to 11 */
  // char st[11] = "fundamental";

  return 0;
}


