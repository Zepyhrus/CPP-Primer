#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv) {
  vector<int> vecA = {0, 1, 1, 2};
  vector<int> vecB = {0, 1, 1, 2, 3, 5, 8};
  bool res = true;

  for (int i = 0; i < vecA.size() & i < vecB.size(); ++i) {
    if (vecA[i] != vecB[i]) {
      res = false;
    }
  }

  if (res) {
    cout << "I love you babe!" << endl;
  } else {
    cout << "I love you no more..." << endl;
  }

  return 0;
}