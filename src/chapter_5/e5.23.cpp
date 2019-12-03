#include <iostream>
#include <vector>
#include <string>

using namespace std;

int get_size() { return 10; }

int main(int argc, char** argv) {
  // This includes the 5.23/5.24/5.25 part of exercise
  int i1, i2;

  while(cin) {
    cout << "I love you babe: ";
    cin >> i1 >> i2;

    try {
      if (i2 == 0)
        throw runtime_error("Zero division!");

      double db = i1 * 1.0 / i2;
      cout << "The division is: " << db << endl;
    } catch(runtime_error err) {
      cout << err.what() << '\n';

      cout << "Try again? Enter y or n" << endl;

      char c;
      cin >> c;

      if (!cin || c == 'n')
        break;
    }
    
  }

  return 0;
}