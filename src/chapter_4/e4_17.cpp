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

  while (beg != iv.end() && !isspace(*beg))
    *beg = toupper(*beg++);
  
  cout << iv << endl;
  
  return 0;
}
