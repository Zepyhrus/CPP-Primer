#include <iostream>
#include "1/Sales_item.h"


int main(int argc, char** argv)
{
  Sales_item item0, item1, item_sum;

  std::cin >> item0;
  item_sum = item0;

  while (std::cin >> item1)
  {
    if (item0.isbn() == item1.isbn()) {
      item_sum += item1;
    } else {
      std::cout << "Wrong input" << std::endl;
      break;
    }
  }

  std::cout << item_sum << std::endl;


}


