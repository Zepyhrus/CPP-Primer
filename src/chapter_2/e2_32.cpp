#include <iostream>


int main(int argc, char** argv)
{
  /* illegal: a value of type int can not be used to initialize int * */
  // int null = 0, *p = null;

  /* this will make it legal */
  int null = 0;
  int *p = &null;

  return 0;
}
