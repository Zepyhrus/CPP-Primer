#include <iostream>
#include <vector>
#include <random>

using namespace std;


int main(int argc, char** argv)
{
  int grade = rand() % 100;
  cout << grade << endl;

  string final = (grade > 90) ? "high"
                              : (grade > 75) ? "pass"
                              : (grade > 60) ? "low"
                              : "failed";

  cout << final << endl;
}



