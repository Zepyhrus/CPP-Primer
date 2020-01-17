#include <iostream>
#include <string>
#include <vector>


using namespace std;

/* 6.21 */
int compare(int a, int *b) { return a > *b ? a : *b; }


/* 6.22 */
void swap(int *(&a), int *(&b)) {
  int *_tmp;

  _tmp = a;

  a = b;

  b = _tmp;
}


int main() {
  int a = 3;
  int b = 12;


  /* 6.21 */
  cout << compare(a, &b) << endl;

  /* 6.22 */
  int *p = &a;
  int *q = &b;

  cout << "Before: " << *p << ", " << *q << endl;

  swap(p, q);

  cout << "After: " << *p << ", " << *q << endl;

  return 0;
}

