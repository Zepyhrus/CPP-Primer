#include <iostream>
#include <string>
#include <vector>


using namespace std;

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);


int main(int argc, char** argv) {
  /* 6.49 */
  // 候选函数：满足调用条件的函数；
  // 可行函数：符合调用条件，且可调用的函数；

  /* 6.50 */
  // (a)：illegal，二义性调用；
  // (b)：legal，调用f(double, double = 3.14)；
  // (c)：legal，调用f(int, int)；
  // (d)：legal，调用f(double, double = 3.14)；

  /* 6.51 pass */


}