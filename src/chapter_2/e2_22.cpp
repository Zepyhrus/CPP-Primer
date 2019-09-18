#include <iostream>



int main(int argc, char** argv) {
  int n = 12;
  int* p = &n;

  if (p) {
    /* p is null pointer or not */
  }

  if (*p) {
    /* the value p pointed to is 0 or not, i.e., n == 0 */
  }


  return 0;
}



