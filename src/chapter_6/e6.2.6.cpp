#include <iostream>
#include <vector>
#include <string>

using namespace std;

int my_sum(initializer_list<int>);


int main(int argc, char** argv) {
  /* 6.27 */
  cout << my_sum({1, 2, 3, 4}) << endl;

  /* 6.28
   * 循环中的elem是string类型
   */


  /* 6.29
   * 应该，因为initializer_list中的元素都是const，初始化和拷贝都是共享元素
   */


  return 0;
}

int my_sum(initializer_list<int> il) {
  int sum = 0;

  for (const auto &elem : il) {
    sum += elem;
  }

  return sum;
}