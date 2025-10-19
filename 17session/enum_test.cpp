#include<iostream>
/*//
enum traffic_light{
	red, yellow, green 
};
enum rgb_colour{
	red, green, blue
};

*///

enum class traffic_light : char{
	red, yellow, green 
};
enum class rgb_colour{
	red, green, blue
};


int main()
{
	traffic_light cross_road = traffic_light::yellow;
	rgb_colour rgb = rgb_colour::green;
	///cross_road = 2;
	///int G = rgb_colour::green;
	std::cout << sizeof(rgb_colour) << '\n';
	std::cout << sizeof(traffic_light) << '\n';
	//std::cout << G << '\n';

	return 0;

}
