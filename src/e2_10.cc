#include <iostream>


std::string global_str;

int global_int;


int main(int argc, char** argv) {
  std::string local_str;
  int local_int;

  if (global_str == "") {
    printf("global\n");
  }

  std::cout << "global: " << global_str << std::endl;
  std::cout << "global: " << global_int << std::endl;


  if (local_str == "") {
    printf("local\n");
  }

  std::cout << "local: " << local_str << std::endl;
  std::cout << "local: " << local_int << std::endl;

  return 0;
}
