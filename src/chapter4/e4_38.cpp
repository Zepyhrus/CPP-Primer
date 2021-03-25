#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;

int main(int argc, char **argv)
{
  int j = 12;
  int i = 31;

  double slope = static_cast<double>(j/i);

  cout << slope << endl;

  return 0;
}