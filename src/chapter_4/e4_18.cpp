#include <iostream>
#include <vector>

using namespace std;

int getPtr()
{
  return 1;
}

int main()
{
  // vector<char> iv{'1', '2', '3', '4', '7', '8', 'p'};
  string iv = "Here we go!";
  auto beg = iv.begin();

  auto pbeg = iv.begin();

  while (pbeg != iv.end() && *beg >= 0)
    cout << *(++pbeg) << endl;
  /* this will print without H and another empty char at the end */
  
  /* the prefix increment (or decrement) current value and return the changed value
   * the postfix return the value at current stage and then increment (or decrement)
   */
  
  return 0;
}
