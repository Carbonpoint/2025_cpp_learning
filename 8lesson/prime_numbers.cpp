#include <iostream>

int main()
{
	using namespace std;

	for (;;) {
		cout << "X = (0 for exit) ";
		int x;
		if (cin >> x) {
			if (x <= 0) {
				cout << "Invalid number!";
				break;
			}
			else if (x == 1)
				cout << x << " isn't prime." << endl;
			else { // x >= 2
				bool is_prime = true;

				for (int i = 2; i <= x / 2 && (is_prime = (x % i != 0)); ++i)
					;
				if (!is_prime)
					cout << x << " isn't prime.\n";
				else
					cout << x << " is prime.\n";
			}
		}
	}
}
