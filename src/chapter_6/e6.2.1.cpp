#include <iostream>

using namespace std;


void swap(int* i, int* j);

int main() {
  int a = 3, b = 4;
  int *i = &a, *j = &b;

  cout << "Before: " << a << ", " << b << endl;
  swap(i, j);

  cout << "After: " << a << ", " << b << endl;


}


void swap(int* i, int* j) {
  *i = *i ^ *j;
  *j = *i ^ *j;
  *i = *i ^ *j;
}

