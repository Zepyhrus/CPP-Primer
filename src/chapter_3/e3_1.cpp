#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
  //  e1.9
  int i = 50;
  int sum = 0;

  while (i <= 100) {
    sum += i;
    i++;
  }

  printf("The result is %d\n", sum);
  printf("The real result is %d\n", 150 * 51 / 2);

  // e1.10
  i = 10;
  sum = 0;

  while (i >= 0) {
    sum += i;
    i--;
  }

  printf("The result is %d\n", sum);
  printf("The real result is %d\n", 150 * 51 / 2);
  
  // e1.11
  int v1, v2;

  cin >> v1 >> v2;

  i = min(v1, v2);

  while (i <= max(v1, v2))
  {
    cout << i << endl;
    i++;
  }
  
  return 0;
}


