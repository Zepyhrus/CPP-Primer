#include "include/Chapter6.h"



int fact(signed k) {
  int val = 1;

  for (int i = 0; i < k; ) {
    val *= ++i;
  }

  return val;
}




