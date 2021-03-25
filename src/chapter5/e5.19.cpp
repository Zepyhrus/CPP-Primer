#include <iostream>
#include <vector>
#include <string>

using namespace std;

int get_response() {
  return 10;
}



int main(int argc, char** argv) {
  /* Includes exercise for 5.19
   */
  string sval1, sval2;

  do {
    cout << "I love you babe: ";
    cin >> sval1 >> sval2;

    if (sval1.length() <= sval2.length())
      cout << "sval1: " << sval1 << endl;
    else
      cout << "sval2: " << sval2 << endl;
    
  } while (cin);

  return 0;
}