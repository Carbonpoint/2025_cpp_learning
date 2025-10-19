#include <iostream>

double d; // Global memory: static storage

double get_double_and_return_it(double);
void static_test();
int main()
{
	std::cout << d << '\n';
	double copy_of_d = get_double_and_return_it(d);
	std::cout << copy_of_d << '\n';
	double another_local_double;
	std::cout << "another local variable is: " << another_local_double << '\n';
	static_test();
	static_test();
	static_test();
	static_test();
	return 0;
}
double get_double_and_return_it(double d)
{
	return d;
}

void static_test()
{
	static int i;
	int j = 42;
	std::cout << "i= " << i << '\t' << ", j=" << j << '\n';
	j++;
	i++;
	std::cout << "After increment: \ni= " << i << '\t' << ", j=" << j << '\n';
}
