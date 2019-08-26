#include <string>
#include <cstring>     // equvilent to #include <string.h>
#include <iostream>
#include <vector>
#include <cctype>
#include <iterator>

using namespace std;

int main()
{
  const char ca[] = {'H', 'e', 'l', 'l', 'o'};
  const char *cp = ca;

  cout << strlen(ca) << endl;   // this actually works, without '\0'

  while (*cp)
  {
    cout << *cp << endl;
    ++cp;
  }
  


  

  return 0;
}


