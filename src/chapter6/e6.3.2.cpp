#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ___ cout << string(80, '-') << endl;

bool str_subrange(const string &str1, const string &str2);

int &get(int *array, int index) { return array[index]; }

void vprint(vector<int>);

int main(int argc, char** argv) {
  /* 6.30 */
  cout << str_subrange("I", "love you babe") << endl;


  /* 6.31
   * 1) 返回的引用来自于函数内部创建的临时变量
   * 2) 同样来自于函数内部创建的临时变量
   */

  /* 6.32 */
  ___
  int it[] = {1, 2, 3, 4, 5};

  cout << get(it, 3) << endl; // this should return 4

  int ia[10];
  for (int i = 0; i != 10; ++i)
    get(ia, i) = i;

  
  for (auto beg = begin(ia); beg != end(ia);) 
    cout << *beg++ << endl;

  /* 6.33 */
  ___
  vector<int> iv{1, 2, 3, 4, 5};

  vprint(iv);


  /* 6.34
   * this will cause a endless loop, val will ended up with 1 and never reaches 0
   */

  /* 6.35
   * because the recursive function will skip a number then
   */
}

bool str_subrange(const string &str1, const string &str2) {
  if (str1.size() == str2.size())
    return str1 == str2;

  auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

  for (decltype(size) i = 0; i != size; ++i) {
    if (str1[i] != str2[i])
      return false; // compile error: return ;
  }
}


void vprint(vector<int> ivec) {
  if (!ivec.empty()) {
    cout << ivec.front() << endl;

    ivec.erase(ivec.begin());

    vprint(ivec);
  }
}

