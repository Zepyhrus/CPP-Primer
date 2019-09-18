#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
  string s1, s2;

  cin >> s1 >> s2;

  if (s1 == s2)
  {
    cout << "The iputs are the same." << endl;
  }
  else
  {
    cout << "The larger string:\t" << ((s1 > s2) ? s1 : s2) << endl;
    cout << "The longer string:\t" << ((s1.size() > s2.size()) ? s1 : s2)
      << endl;
  }  
  
  return 0;
}


