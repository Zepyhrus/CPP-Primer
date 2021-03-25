#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* 6.36 */
// string (&my_func(int a))[10] {
//   static string my[10] = {"I", " ", "love", " ", "you", " ", "babe"};

//   return my;
// }

/* 6.37 */
/*---------------------------------------------------------------------------*/
// auto my_func(int a) -> string(&)[10] {
//   static string my[10] = {"I", " ", "love", " ", "you", " ", "babe"};

//   return my;
// }

/*---------------------------------------------------------------------------*/
// using arrR = string[10];

// arrR& my_func(int a) {
//   static string my[10] = {"I", " ", "love", " ", "you", " ", "babe"};

//   return my;
// }

/*---------------------------------------------------------------------------*/
string arrR[10] = {"I", " ", "love", " ", "babe"};

decltype(arrR) &my_func(int a) {
  static string my[10] = {"I", " ", "love", " ", "you", " ", "babe"};

  return my;
}

/* 6.38 */
int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrPtr(int i) {
  return (i % 2) ? odd : even;
}


int main(int argc, char** argv) {

  auto km = my_func(5);

  for (int i = 0; i < 7; ++i)
    cout << km[i] << " ";
  cout << endl;

  /* 6.38 */
  int* ia = arrPtr(3);
  for (int i = 0; i < 5; ++i) { cout << ia[i] << endl; }
}


