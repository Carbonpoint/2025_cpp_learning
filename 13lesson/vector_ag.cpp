#include <iostream>

int main()
{
    int a[0];
    int b[0][100];
    int c[100][0];

    std::cout << "sizeof(a) = " << sizeof(a) << std::endl;
    std::cout << "sizeof(b) = " << sizeof(b) << std::endl;
    std::cout << "sizeof(c) = " << sizeof(c) << std::endl;
    std::cout << sizeof(int) << std::endl;
    return 0;
}
