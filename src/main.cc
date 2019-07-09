#include <cstring>
#include <iostream>


/*
 * This is the right way
 * to write a multiple-line
 * comments for the program
 */


int main()
{
  std::cout << "Let's take some input:\n";
  int a, b;

  std::cin >> a >> b;

  int min, max;
  if (a <= b) {
    min = a;
    max = b;
  } else {
    min = b;
    max = a;
  }

  while (min <= max)
  {
    std::cout << min++ << std::endl;
  }   


  return 0;
}

