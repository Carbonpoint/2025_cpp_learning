#include <iostream>
int main()
{
	int i = 1;
	int* p = &i;
	std::cout << p << '\t' << &i << '\n';
return 0;
}
