#include <string>
#include <iostream>
#include <cctype>
#include <typeinfo>

using namespace std;


int main()
{
  const string s = "Keep out!";

  for (auto &c : s) {
    cout << c << "\t" << typeid(c).name() << endl;
  }
  
  return 0;
}
