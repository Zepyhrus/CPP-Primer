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


/* 6.23 */
void print(const int *beg, const int *end) {
  while (beg != end)
    cout << *beg++ << endl;
}


/* 6.24 */
void print(const int ia[10]) {
  for (size_t i = 0; i != 10; ++i)
    cout << ia[i] << endl;
}


int main(int argc, char** argv) {
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

  /* 6.23 */
  int i = 0, j[3] = {1, 2, 3};
  int k[12] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

  print(begin(j), end(j));

  print(k);

  /* 6.24 */
  cout << "6.24. " << endl;
  cout << "argc: " << argc << endl;

  cout << "argv: ";
  for (int i = 0; i < argc; i++) {
    cout << argv[i] << ((i == argc-1) ? "\n" : "\t");
  }


  string res;
  cout << "cat result: ";
  for (int i = 0; i < argc; i++) {
    if (i == 0 || i > 2) { continue; }

    res.append(argv[i]);
  }
  cout << res << endl;

  return 0;
}

