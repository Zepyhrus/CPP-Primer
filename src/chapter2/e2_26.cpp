#include <iostream>


int main(int argc, char** argv)
{
  /* illegal */
  // const int buf;

  int cnt = 0;

  const int sz = cnt;

  ++cnt;

  /* illegal */
  // ++sz;
  


  return 0;
}
