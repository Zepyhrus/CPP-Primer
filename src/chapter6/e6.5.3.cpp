#include <iostream>
#include <string>
#include <vector>
#include <cassert>


using namespace std;


void my_print(const int ia[], size_t size) {
#ifndef NDEBUG
  cerr << __func__ << ": array size is " << size << endl;
#endif

  for (int i = 0; i < size; i++) {
    cout << ia[i] << endl;
  }
}


void vprint(vector<int>);



int main(int argc, char** argv) {
  int ia[3] = {0, 1, 2};

  my_print(ia, 3);


  /* 6.47 */
  vector<int> iv = {0, 1, 2, 3, 4};

  vprint(iv);


  /* 6.48 */
  string s;
  while (cin >> s && s != "sought") {}

  assert(cin);
}


void vprint(vector<int> ivec) {
#ifndef NDEBUG
  cerr << "Current size: " << ivec.size() << endl;
#endif

  if (!ivec.empty()) {
    cout << ivec.front() << endl;

    ivec.erase(ivec.begin());

    vprint(ivec);
  }
}

