#include <iostream>
#include <cmath>
int main()
{
	std::cout << "Enter the numbers for each point seperated by a space; i.e: 'x y'\n";
	int x1, y1, x2, y2;
	std::cout << "First point (X1,Y1): ";
	std::cin >> x1 >> y1;
	//std::cout << "\n";
	std::cout << "Second point (X2,Y2): ";
	std::cin >> x2 >> y2;

	std::cout << "The points are (X1,Y1) = (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ")\n";
	//std::cout << x1; //testing
	
	auto dx = x2 - x1;
	std::cout << "The difference in X is: (X2 - X1) = " << x2 << " - " << x1 << " = " << dx << "\n";
	auto dy = y2 - y1;
	std::cout << "The difference in Y is; (Y2 - Y1) = " << y2 << " - " << y1 << " = " << dy << "\n";
			

	std::cout << "The distance between these two points is equal to the square root of the sum of the squared distances \n";

	std::cout << "sqrt[(X2 - X1)^2 - (Y2 - Y1)^2]\n";
	std::cout << "sqrt[(" << x2 << " - " << x1 << ")^2 + (" << y2 << " - " << y1 << ")^2]\n";
	std::cout << "sqrt[(" << dx << ")^2 + (" << dy << ")^2]\n";
	std::cout << "sqrt[" << dx * dx << " + " << pow (dy, 2) << "]\n";
	std::cout << "sqrt[" << dx * dx + pow (dy, 2) << "]\n";
	std::cout << "The distance between these two points is: " << sqrt (pow (dx, 2) + pow (dy,2)) << "\n";
	return 0;


}
