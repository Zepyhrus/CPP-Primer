#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
  string input, sum = "";
  /* The concate version */
  while (cin >> input)
  {
    sum += input;
  }

  /* The append version */
  while (cin >> input)
  {
    sum += " " + input;
  }

  cout << "The output sum is:\t" << sum << endl;
  
  return 0;
}


