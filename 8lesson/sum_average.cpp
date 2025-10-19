#include <iostream>
int main()
{
	using namespace std;
	int n;
	int count = 0;
	int sum = 0;
	int average;
	while (cin >> n) { // standard input loop
		++count;
		sum += n;
	}

	average = sum /count; //integer division
	cout << count << '\t' << sum << '\t' << average << '\n';

	return 0;

}
