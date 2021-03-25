#include <iostream>
#include <vector>

using namespace std;

/* Including:
 *  5.9
 *  5.10
 *  5.11
 *  5.12
 *  5.13
 */

char next_text() {
  string alphabet("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLEMQPQRSTUVWXYZ");
  int k = rand() % 52;

  return alphabet[k];
}

unsigned some_value() { return 10; }

int get_value() { return rand() % 10; }

int get_num() { return rand() % 10; }


int main(int argc, char** argv)
{
  int cnt = 0;
  char let;

  // 5.9
  while (cin >> let)
  {
    if (let == 'a' | let == 'e' | let == 'i' | let == 'o' | let == 'u') {
      ++cnt;
    }
  }
  
  cout << "5.9. " <<  cnt << " letters are counted！" << endl;
  cin.clear();


  // 5.10
  char cet;
  cnt = 0;
  while (cin >> cet)
  {
    if (cet == 'a' | cet == 'e' | cet == 'i' | cet == 'o' | cet == 'u') {
      ++cnt;
    } else if (cet == 'A' | cet == 'E' | cet == 'I' | cet == 'O' | cet == 'U') {
      ++cnt;
    }
  }

  cout << "5.10. " << cnt << " letters are counted!" << endl;
  cin.clear();

  // 5.11
  cnt = 0;
  while (cin >> cet)
  {
    switch (cet) {
      case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': 
      case 'o': case 'O': case 'u': case 'U': 
      case '\t': case ' ': case '\n': {
        ++cnt;
        break;
      } default: {
        break; // empty action
      }
    }
  }
  
  cout << "5.11. " << cnt << endl;
  cin.clear();

  // 5.12
  cnt = 0;
  string input, sls;
  while (getline(cin, input))
  {
    for (int i = 0; i < input.size()-1; ++i) {
      if (input[i] == 'f') {
        switch (input[i+1])
        {
        case 'f': case 'l': case 'i':
          ++cnt;
          break;
        default:
          break;
        }
      }
    }
  }

  cout << "5.12. " << cnt << endl;

  // 5.13
  // (a)
  unsigned aCnt = 0, eCnt = 0, iouCnt = 0;

  char ch = next_text();
  switch (ch){
    case 'a': {aCnt++; break;}
    case 'e': {eCnt++; break;}
    default: {iouCnt++; break;}
  }

  // (b)
  unsigned index = some_value();
  vector<int> ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int ix;

  switch (index)
  {
  case 1:
    ix = get_value();
    ivec[ ix ] = index;
    break;
  default:
    ix = ivec.size() - 1;
    ivec[ ix ] = index;
    break;
  }
  
  // (c)
  unsigned evenCnt = 0, oddCnt = 0;
  int digit = get_num() % 10;

  switch (digit) {
    case 1: case 3: case 5: case 7: case 9:
      ++oddCnt;
      break;
    case 2: case 4: case 6: case 8: case 0:
      ++evenCnt;
      break;
    default:
      break;
  }

  // (d)
  const unsigned ival = 512, jval = 1024, kval = 4096;
  unsigned bufsize;
  unsigned swt = get_num();
  switch(swt) {
    case ival:
      bufsize = ival * sizeof(int);
      break;
    case jval:
      bufsize = jval * sizeof(int);
      break;
    case kval:
      bufsize = kval * sizeof(int);
      break;
    default:
      cout << "I love you babe" << endl;
      break;
  }

  return 0;
}