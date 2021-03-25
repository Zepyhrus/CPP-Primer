#include <iostream>
#include <vector>

using namespace std;

int main()
{
  /* (a) */

  vector<int> vec = {0, 1, 2, 3, 4};

  cout << * vec.begin() << endl;  // equals to *(vec.begin())

  /* (b) */
  cout << * vec.begin() + 1 << endl;  // equals to (*(vec.begin())) + 1

  return 0;
}
