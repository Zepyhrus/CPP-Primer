#include <iostream>
#include <vector>
#include <string>

using namespace std;


const string &bigger(const string &s1, const string &s2) {
  return s1.size() > s2.size() ? s1 : s2;
}

typedef const string& tf2(const string &, const string &);
typedef decltype(bigger) tf3;


typedef const string& (*tpf2) (const string &, const string &);
typedef decltype(bigger) *tpf3;

void useBigger(const string &s1, const string &s2, tf2 my_tf) {
  string s = my_tf(s1, s2);

  cout << s << endl;
}

/* A really complicated example */
using F = const string&(const string &, const string &);

// F f1(int); // illegal, function returning a function is not allowed

// legal, function returninng a pointer pointing to function is OK
// 3 ways to define a function fucking return a pointer pointing to a fucking function
F *f1(int k) {
  cout << k << endl;

  tf2 *my_pf2 = bigger;

  return my_pf2;
}

const string& (*f2(int k))(const string &, const string &) {
  cout << k << endl;

  tpf2 my_pf = bigger;

  return my_pf;
}

auto f3(int k) -> const string& (*)(const string&, const string&) {
  cout << "fucking complicated @ " << k << endl;

  tpf3 jesus = &bigger;

  return jesus;
}

/* 6.54 */
int my_sum(int a, int b) { return a + b; }

typedef int (*sump)(int, int);

/* 6.55 */
int my_sub(int a, int b) { return a - b; }
int my_mul(int a, int b) { return a * b; }
int my_div(int a, int b) { return a / (b*b + 1); }

int main(int argc, char** argv) {
  const string &(*pf)(const string &, const string &);

  // pf = bigger;
  pf = &bigger;
  
  tpf2 my_pf = bigger;
  tpf3 my_pf2 = &bigger;

  cout << (*pf)("hello1", "world") << endl;  // pf("hello", "world") also works fine
  cout << my_pf("hello", "world2") << endl;
  cout << my_pf2("hello3", "world") << endl;

  useBigger("hello", "world4", my_pf);
  useBigger("hello5", "world", *my_pf2);

  useBigger("hello", "my world", f1(5));
  useBigger("my hello", "world", f2(12));
  useBigger("jesus's", "world", f3(42));
  
  /* 6.54 */
  vector<sump> fv = {&my_sum, &my_sub, &my_mul, &my_div};

  /* 6.55 */
  for (auto &fc : fv) {
    /* 6.56 */
    cout << fc(3, 4) << endl;
  }
}




