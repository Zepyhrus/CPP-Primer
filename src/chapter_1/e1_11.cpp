#include <iostream>


int main(int argc, char** argv)
{
  int v1, v2;

  std::cin >> v1 >> v2;

  int i = std::min(v1, v2);

  while (i <= std::max(v1, v2))
  {
    std::cout << i << std::endl;
    i++;
  }
  
  return 0;
}


