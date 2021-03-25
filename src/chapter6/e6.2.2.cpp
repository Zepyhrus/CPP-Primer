#include <iostream>
#include <string>

using namespace std;

/* 6.11 */
void reset(int &i, int k);


/* 6.12 */
void swap(int &a, int &b);

int main() {
  /* 6.11 */
  int a = 12;

  cout << "Before: " << a << endl;

  reset(a, 42);

  cout << "After: " << a << endl;

  /* 6.12 */
  int b = 33;

  cout << "Before: " << a << ", " << b << endl;

  swap(a, b);

  cout << "After: " << a << ", " << b << endl;


  /* 6.13
   * void f(T): passing a copy of T and do nothing;
   * void f(&T): passing the reference of T, and do something directly to T;
   */


  /* 6.14
   * void f(iostream &io): the io could not be copied;
   * const int a, b;  void f(int a, int b): the input could not be changed;
   */

  /* 6.15
   * s is a const reference cause the user do not want s to be changed.
   * occurs is a normal reference cause the user needs to change occurs.
   * c is a char and if c is a reference, the user have to declare c before using it.
   * If s is a normal reference, s maybe changed by accidents during the application of the function.
   * If occurs is a constant reference, it won't be changed.
   */



  return 0;
}

void reset(int &i, int k) {
  
  i = k;
}


void swap(int &a, int &b) {
  a = a ^ b;

  b = a ^ b;

  a = a ^ b;
}


string::size_type find_char(const string &s, char c, string::size_type &occurs) {
  auto ret = s.size();
  occurs = 0;

  for (decltype(ret) i = 0; i != s.size(); ++i) {
    if (s[i] == c) {
      if (ret == s.size()) {
        ret = i;
      }

      ++occurs;
    }
  }

}