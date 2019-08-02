#include <iostream>


int main(int argc, char** argv)
{
  /* ip: pointer to int
   * i: int
   * r: reference to i
   */
  // int* ip, i, &r = i;

  /* i: int
   * ip: null int pointer
   */
  int i, *ip = 0;

  std::cout << "i: " << i << std::endl; //  yields 32766, not 0

  /* ip: int pointer
   * ip2: int
   */
  // int* ip, ip2;
}
