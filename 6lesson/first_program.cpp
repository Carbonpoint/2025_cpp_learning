// calculate and print a table of squares 0-99
#include <iostream>
int main()
{
	long long int i {0};
	while (i < 1000000000000000000000000000000000000) {
		std::cout << i << '\t' << i * i << '\n';
		++i; // increment i (that is, i becomes i+1)
	}
}
// no it wasn't actually written in C++
