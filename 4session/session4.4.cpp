#include <iostream>

int main()
{
	char c = 'A';
	std::cout << ++c << '\n';
	char d = ++c;
	std::cout << "c = " << c << '\t' << "and d =" << d << '\n';

	/*
	double x = 10;
	double z = 3;
	std::cout << x/z << "\n";
	
	// fundamental types
	std::cout << "On this machine ..." << std::endl;
	std::cout << "Size of bool is " << sizeof(bool) << std::endl;
	std::cout << "Size of char is " << sizeof(char) << std::endl;
	std::cout << "Size of int is " << sizeof(int) << std::endl;
	std::cout << "Size of long int is " << sizeof(long) << std::endl;
	std::cout << "Size of double is " << sizeof(double) << std::endl;
	// some objects
	int i;
	long double d;
	bool b = false;
	std::cout << "Size of i is " << sizeof(i) << std::endl;
	std::cout << "size of d is " << sizeof(d) << std::endl;
	std::cout << "Size of b is " << sizeof(b) << std::endl;
	*/
	return 0;

}

