#include <iostream>
#include <vector>

using namespace std;

int getPtr()
{
  return 1;
}

int main()
{
  vector<string> vs{"Here", "we", "go", "!"};

  auto iter = vs.begin();

  cout << *iter++ << endl;  // this will yield "Here"

  // cout << (*iter)++ << endl;  // error, you may not increment a string

  // if (*iter.empty())
  {
    cout << "Member access operation has less precedence than "
      << "dereference operation" << endl;
  }
    
  if (!iter->empty())
    cout << *iter << endl;
  
  // cout << ++*iter << endl;  // error, stirng has no increment operations
  if (!iter++->empty())
    cout << *iter << endl;


  return 0;
}
