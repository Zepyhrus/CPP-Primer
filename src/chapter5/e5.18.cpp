#include <iostream>
#include <vector>
#include <string>

using namespace std;

int get_response() {
  return 10;
}



int main(int argc, char** argv) {
  /* Includes exercise for 5.4.4
   */

  // (a)
  do {
    int v1, v2;

    cout << "Please enter two numbers to sum: ";
    if (cin >> v1 >> v2) 
      cout << "Sum is: " << v1 + v2 << endl;
  } while (cin);

  cin.clear();

  // (b)
  int ival;
  do {
    // ...
  } while (ival = get_response());

  // (c)
  do {
    int ival = get_response();

    cout << "ival: " << ival << endl;
  } while (ival);  // it should be declared outside the loop
  

  return 0;
}