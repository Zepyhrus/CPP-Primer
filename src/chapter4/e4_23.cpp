#include <iostream>
#include <vector>
#include <random>

using namespace std;


int main(int argc, char** argv)
{
  string s = "word";

  /* first calculate 'd': s[s.size() - 1]
   * second "wordd": s + 'd'
   * 3rd "wordd" == 's' causes the operand error
   */
  string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
  cout << pl << endl;

}



