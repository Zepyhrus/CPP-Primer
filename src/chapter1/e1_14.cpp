#include <iostream>


int main(int argc, char** argv)
{
  int v1, v2;

  std::cin >> v1 >> v2;

  int i = std::min(v1, v2);

  for (; i <= std::max(v1, v2); ++i) {
    std::cout << i << std::endl;
  }

  /* while: easy to break, a little bit more efficiency
   * for: easier to understand
   */
  
  return 0;
}


