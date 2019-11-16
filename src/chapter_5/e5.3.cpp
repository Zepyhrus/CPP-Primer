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
  
  return 0;
}