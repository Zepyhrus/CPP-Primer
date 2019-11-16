#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* Exercise of section 5.1, including:
 *  5.4
 *  5.5
 *  5.6
 *  5.7
 *  5.8
 */

int get_value() {
  return 10;
}

int main(int argc, char** argv) {
  string s("I love you babe");

  // 5.4
  string::iterator iter = s.begin();
  
  // (a) illegal
  while (iter != s.end()) {
    cout << *iter << endl;
    ++iter;
  }

  // (b) illegal, the usage of status is out of scope
  // while (bool status = find(word))

  int score;
  
  // 5.5
  while (cin >> score)
  {
    if (score > 100 | score < 0) {
      continue;
    } else {
      if (score >= 60) {
        cout << "pass" << endl;
      } else {
        cout << "failed" << endl;
      }
    }
  }

  // 5.6
  while (cin >> score)
  {
    if (score >  100 | score < 0) { continue; }
    else
    {
      cout << (score >= 60 ? "pass" : "falied") << endl;
    }
  }

  // 5.7
  int ival1 = 3, ival2 = 4;

  // (a)
  if (ival1 != ival2) { ival1 = ival2; }
  else { ival1 = ival2 = 0; }

  // (b)
  int ival = 12, minval = 3, occurs = 0;

  if (ival < minval) {
    minval = ival;
    occurs = 1;
  }

  // (c)
  if (ival = get_value())
    cout << "ival = " << ival << endl;
  if (!ival)
    cout << "ival = 0\n";
  
  // (d)
  if (ival == 0)
    ival = get_value();

  // 5.8
  cout << "method c++ used to align if and else" << endl;

  return 0;
}