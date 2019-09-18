#include <iostream>
#include <vector>

using namespace std;

int getPtr()
{
  return 1;
}

int main()
{
  vector<int> vec{1, 2, 3, 5};
  int *ptr = &vec[0];

  int ival = 0;

  if (ptr != 0 && *ptr++)
    cout << *ptr << endl;

  if (ival++ && ival)
    cout << ival << endl;

  if (vec[ival++] <= vec[ival])
  {
    cout << vec[ival] << endl;
    cout << ival << endl;
  }

  return 0;
}
