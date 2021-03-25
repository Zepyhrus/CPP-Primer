#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int f()
{
  return 1;
}

struct stu
{
  int mem[3] = {1, 2, 3};
};



int main(int argc, char **argv)
{
  int i = 0, x = 1, y = 2, a = 3, b = 4;

  stu *p;

  cout << sizeof (x + y) << endl;

  cout << sizeof p->mem[i] << endl;

  cout << (sizeof (a < b)) << endl;

  cout << (sizeof f()) << endl;

}


