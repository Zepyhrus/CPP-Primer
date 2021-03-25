#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv) {
  int cnt = 0, maxCnt = 0;

  string currStr, lastStr, maxStr;

  while (cin >> currStr)
  {
    if (currStr == lastStr) {
      ++cnt;
      if (cnt >= maxCnt) {
        maxCnt = cnt;
        maxStr = currStr;
      }
    } else {
      lastStr = currStr;
      cnt = 0;
    }
  }

  if (maxCnt == 0) {
    cout << "I love you babe!" << endl;
  } else {
    cout << maxStr << " occurs " << maxCnt+1 << " times!" << endl;
  }
  

  return 0;
}