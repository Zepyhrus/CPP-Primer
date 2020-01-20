#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* 6.40 (a) legal */
int ff(int a, int b = 0, int c = 0);

/* 6.40 (b) legal */
// char *init(int ht = 24, int wd, char bckgrnd);

/* 6.41 */
char *init(int ht, int wd = 80, char bckgrnd = ' ');


/* 6.42 */
string make_plural(size_t ctr, const string &word, const string &ending = "s") {
  return (ctr > 1) ? word + ending : word;
}



int main(int argc, char** argv) {
  /* 6.41 (a) illegal */
  // init();

  /* 6.41 (b) legal */
  // init(24, 10);

  /* 6.41 (c) legal but not good, the '*' will be converted to integer */
  // init(14, '*');

  /* 6.42 */
  cout << make_plural(3, "success", "es") << endl;
  cout << make_plural(2, "failure") << endl;
}

