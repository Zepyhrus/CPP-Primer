#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fcn(const int i) { cout << i << endl; }


/* this will raise redefinition error */
// void fcn(int i) {
//   cout << i << endl;
// }


/* 6.16 */
bool is_empty(const string &s) { return s.empty(); }

/* 6.17 */
bool has_cap(const string &s);
void change_cap(string &s);

/* 6.18 */
typedef double matrix;

bool compare(matrix &a, matrix &b);
vector<int>::iterator change_val(int x, vector<int>::iterator itr);


/* 6.19 */
double calc(double);  // legal
int count(const string &, char);  // legal
int sum(vector<int>::iterator, vector<int>::iterator, int); // legal
vector<int> vec(10);  // legal



int main() {
  int a = 12;
  const int b = a;

  fcn(a);
  fcn(b);

  /* 6.17 */
  cout << has_cap("A good dog!") << endl;

  string s = "A good dOg!";

  change_cap(s); 

  cout << s << endl;

  /* 6.19
   * (a): illegal
   * (b): legal
   * (c): legal
   * (d): legal
   */

  /* 6.20
   * When the user should not change the reference
   * it may cause cross reference failed, especially being wrapped by other function
   */

  return 0;
}

bool has_cap(const string &s) {
  bool has = false;

  for (auto &c : s) {
    if (c >= 65 && c <= 90) { has = true; }
  }

  return has;
}


void change_cap(string &s) {
  for (auto &c : s) {
    if (c >= 65 && c <= 90) { c += 32; }
  }
}
