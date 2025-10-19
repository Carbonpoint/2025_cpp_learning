#include "point.h"
#include <iostream>
struct c_point{int x, y;
char dummy;
};
Point point_func(int x, int y){
	Point My_Point(x, y);
	return My_Point;
}
int main(){
	const int i = 100;
	const Point center;
	///center.move(4, 3);
	std::cout << center.get_x() << '\n';
	std::cout << center.get_x() << '\n';
	auto p = point_func(42, 65);
	p.move(4, 3);
	std::cout << "P = (" << p.get_x() << "," << p.get_y() << ")" << '\n';
	///std::cout << center.x_ << '\n';
	std::cout << sizeof(c_point) << '\t' << sizeof(Point) << '\n';
	return 0;
}
