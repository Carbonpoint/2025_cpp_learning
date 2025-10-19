// inch to centimeter conversion
#include <iostream>
int main()
{
	double cm_per_inch = 2.54; // number of centimeters in an inch
	std::cout << "Please enter a length in inches: (0 or exit) ";
	double length; // length in inches
	std::cin >> length;
	if (length != 0) {
		std::cout << length << " in == " << cm_per_inch * length << " cm\n";
	}
	return 0;
}
