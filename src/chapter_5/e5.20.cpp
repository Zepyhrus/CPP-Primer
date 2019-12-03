#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv) {
  /* Includes exercise for 5.20
   */
  string buf, pre;

  while (cin >> buf && !buf.empty()) {
    if (pre == buf) {
      cout << "The same word is: " << buf << endl;

      break;
    }

    pre = buf;
    cout << "No words are the same!" << endl;
  }

  return 0;
}