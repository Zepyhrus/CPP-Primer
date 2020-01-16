#include "include/Chapter6.h"

#include <iostream>


using namespace std;


int main(int argc, char** argv) {
  for (size_t i = 0; i != 10; ++i) {
    cout << count_calls() << endl;
  }

  /* 6.6 */
  cout << "Formal parameter: variables waiting to be initialized, will be used during inside the function." << endl;
  cout << "Local parameter: parameters initialized and used during inside of the function." << endl;
  cout << "Local static parameter: initialized the first time the function is called and destroied after the funtion." << endl;

  /* 6.7 */
  for (size_t i = 0; i != 10; ++i) {
    cout << my_call(12, 11) << endl;
  }

  /* 6.8 */
  my_call(13, 14);

  return 0;
}


size_t my_call(int k, int j) {
  static size_t cnt = 0;

  return cnt++;
}

size_t count_calls() {
  static size_t ctr = 0;

  return ++ctr;
}