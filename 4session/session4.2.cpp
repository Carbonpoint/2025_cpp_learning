#include <iostream>
int j;
int main()
{
        long int i = 10'000'000'000;
        // std::cin >> i;
        // std::cout << j << '\n'; 
        std::cout << i << '\n';
        std::cout << sizeof(i) << '\n';
        std::cout << sizeof(j) << '\n';
        std::cout << sizeof(double) << '\n';
        std::cout << sizeof(3.14) << '\n';
        std::cout << sizeof(float) << '\n';
        return 0;
}
