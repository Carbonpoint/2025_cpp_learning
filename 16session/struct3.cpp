#include<iostream>


struct Point {
	int x, y;
} center = {0, 0};

Point p0 = {1, 100};
int main()
{
	Point p1 = {2,2}, p2 = {-1, 5};
	p1.x = p2.x;
	std::cout << '(' << p1.x << '\t' << p1.y << ')' << '\n';
	return 0;

}
