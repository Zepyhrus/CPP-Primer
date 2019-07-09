#include <iostream>
#include <cstring>



int main()
{
    int a = 10;

    std::cout << "Starts with a = " << a << std::endl;

    int b = ++a;

    std::cout << "b = " << b << std::endl;

    int c = a++;

    std::cout << "c = " << c << std::endl;
    std::cout << "Finished!\n";

    return 0;
}

