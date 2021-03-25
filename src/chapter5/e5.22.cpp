#include <iostream>
#include <vector>
#include <string>

using namespace std;

int get_size() { return 10; }

int main(int argc, char** argv) {
//  begin:
//   cout << "Here is a begin." << endl;
//   int sz = get_size();
//   if (sz >= 0)
//     goto begin;
  while (true) {
    cout << "Here is a begin." << endl;
    int sz = get_size();

    if (sz < 0) { 
      throw runtime_error("I love you babe!");
      
      break; 
    }
  }

  return 0;
}