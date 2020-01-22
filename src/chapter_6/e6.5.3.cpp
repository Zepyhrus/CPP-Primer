#include <iostream>
#include <string>
#include <vector>


using namespace std;


void my_print(const int ia[], size_t size) {
#ifndef NDEBUG
  cerr << __func__ << ": array size is " << size << endl;
#endif

  for (int i = 0; i < size; i++) {
    cout << ia[i] << endl;
  }
}



int main(int argc, char** argv) {
  int ia[3] = {0, 1, 2};

  my_print(ia, 3);
}