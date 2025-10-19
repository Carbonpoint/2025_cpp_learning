#include <iostream>
inline void print(int x = 0){
	std::cout << "Print Integer:";
	std::cout << x << '\n';
}
inline void print(double y){
	std::cout << "Print Double:";
	std::cout << y << '\n';
}

int main(){
	print(42);
	print(9.8);
	print();
	return 0;

}

