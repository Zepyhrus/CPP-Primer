#include <iostream>


int main(int argc, char** argv)
{
  int a = 42;
  int &b = a;
  auto c = b;
  const int d = 42;
  auto e = d;
  auto f = &d;
  const auto g = d;

  return 0;
}
