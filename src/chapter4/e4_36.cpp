#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;

int main(int argc, char **argv)
{
  int i = 220;
  double d = 2.5;

  int id = static_cast<int>(d);

  i *= id;

  cout << i << endl;
}


