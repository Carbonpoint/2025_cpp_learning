#include <iostream>

class Fred { //inline
public:
	Fred(int i = 3, int j = 5) {
	std::cout << "Calling Fred::default ctor \n";		
	std::cout << i << ", " << j << '\n';
	};
};



class Freddie { //not inline
public:
	Freddie();
};


int main() {
	Fred fred;
	Fred jasmine(42);
	Fred parsa(42,-100);
	return 0;
}
