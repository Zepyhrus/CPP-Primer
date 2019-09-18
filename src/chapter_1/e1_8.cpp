#include <iostream>


int main(int argc, char** argv)
{
  std::cout << "/*";
  std::cout << "*/";

  /* below is illegal */
  // std::cout << /* "*/" */;
  /* below is legal */
  std::cout << /*  "*/" /*  "/*" */;
  
  return 0;
}


