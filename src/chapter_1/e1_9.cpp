#include <iostream>


int main(int argc, char** argv)
{
  int i = 50;
  int sum = 0;

  while (i <= 100) {
    sum += i;
    i++;
  }

  printf("The result is %d", sum);
  printf("The real result is %d", 150 * 51 / 2);
  
  
  return 0;
}


