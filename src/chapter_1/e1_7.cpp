#include <iostream>


int main(int argc, char** argv)
{
  /* below is wrong nested comments */
  // /* This is a wrong nested comment*/    */ 
  std::cout << "Enter two numbers:" << std::endl;

  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The product of " << v1 << " and " << v2;
  std::cout << " is " << v1 * v2 << std::endl;
  
  return 0;
}


