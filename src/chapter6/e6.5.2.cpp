#include <iostream>
#include <vector>
#include <string>
#include <boost/timer.hpp>

using namespace std;


constexpr int new_sz() { return 42; }

constexpr size_t scale(size_t cnt) { return new_sz() * cnt; }

inline bool isShorterInline(const string &s1, const string &s2) { return s1.size() < s2.size(); }
bool isShorter(const string &s1, const string &s2) { return s1.size() < s2.size(); }
constexpr bool isShorterConst(const string &s1, const string &s2) { return s1.size() < s2.size(); }

int main(int argc, char** argv) {
  
  int arr[scale(2)];

  int i = 2;

  int a2[scale(i)]; // legal, but this is not a const exprssion

  for (int k = 0; k < i; ++k) {
    a2[k] = k;

    cout << a2[k] << endl;
  }

  /* 6.43 */
  // inline bool eq(const BigInt&, const BigInt&) {...} // in header files
  // void putValues(int *arr, int size);    // in source files

  /* 6.44 */
  boost::timer _tic;

  _tic.restart();

  for (int i = 0; i < 10000000; i++) {
    isShorter("I love you babe", "sorry");
  }

  cout << _tic.elapsed() << endl;
  _tic.restart();

  for (int i = 0; i < 10000000; i++) {
    isShorterInline("I love you babe", "sorry");
  }

  cout << _tic.elapsed() << endl;

  /* acctually there is no big fucking difference */


  /* 6.45
   * some short function may have the potential to be inline function
   */

  /* 6.46 */
  _tic.restart();

  for (int i = 0; i < 10000000; i++) {
    // isShorterConst("I love you babe", "sorry");  // failed 
  }

  cout << _tic.elapsed() << endl;
}

