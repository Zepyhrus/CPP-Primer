#include <iostream>


using namespace std;

int f();

int f2(int i);

int calc(int v1, int v2); // int calc(int v1, int v1);

double square(double x) { return x * x; } // double square(double x) return x * x;

int fact(signed k);

void interact();

unsigned long my_abs(int k);



int main(int argc, char** argv) {
  /* 6.1 */
  cout << "实参是初始化后的形参。" << endl;

  /* 6.2 */
  cout << f() << endl;

  cout << f2(42) << endl;

  cout << calc(2, 3) << endl;

  cout << square(12) << endl;

  /* 6.3 */
  cout << fact(0) << endl;

  /* 6.4 */
  interact();

  /* 6.5 */
  cout << my_abs(-12) << endl;

  return 0;
}


int f() {
  string s = "I love you babe.";

  // return s;  // return the wrong type
  return 42;
}

int f2(int i) {
  // wrong: no return value

  return i;
}

int calc(int v1, int v2) {
  // wrong: the same input

  return v1 + v2;
}

int fact(signed k) {
  int val = 1;

  for (int i = 0; i < k; ) {
    val *= ++i;
  }

  return val;
}

void interact() {
  int k;

  while (cin >> k) {
    if (k < 0) throw runtime_error("Wrong input!");

    cout << "Output: " << fact(k) << endl;
  }
}


unsigned long my_abs(int k) {

  return abs(k);
}