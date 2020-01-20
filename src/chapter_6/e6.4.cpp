#include <iostream>
#include <vector>
#include <string>

using namespace std;


const string &shorter_string(const string &s1, const string &s2) {
  return s1.size() <= s2.size() ? s1 : s2;
}

string &shorter_string(string &s1, string &s2) {
  auto &r = shorter_string(const_cast<const string&>(s1), const_cast<const string&>(s2));

  return const_cast<string&>(r);

}


int main(int argc, char** argv) {
  const string s1 = "I";
  const string s2 = "love";

  auto s3 = shorter_string(s1, s2);

  cout << s3 << endl;

  s3 = "no problem";

  cout << s3 << endl;

}


