#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* Exercise of section 5.1, including:
 *  5.1
 *  5.2
 *  5.3
 */

int main(int argc, char** argv) {
  cout << "5.1 An empty sentence with single semicolon." << endl;

  cout << "5.2 A few statements compounded by curly braces.\n" 
    << "\tUsed in somewhere grammaticaly one statement,\n"
    << "\thowever, multiple statements are necessary logisticaly" << endl;


  int sum = 0, val = 0;

  while (val <= 10) sum += val++;

  cout << sum << endl;

  return 0;
}