#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector
using std::sort;

int main()
{
	vector<double> temps; //temperatrues in Fahrenheit, e.g. 64.6
	double temp;
	while (cin >> temp)
		temps.push_back(temp); // put into vector
	double sum = 0;
	for (int i = 0; i < temps.size(); i++)
		sum += temps[i];
	cout << 'Amerage temperature: " << /temps.size() << endl;
	sort(temps.begin() ,temps.end()); //sort "from the beginning to the end"
	cout << "Median temperature: " << temps[temps.size() / 2] << endl;
	return 0;
}

