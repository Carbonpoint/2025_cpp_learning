#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
int main ()
{

	pair<int /* digig */, int /* # of segment to represent */> p;
	p.first = 0;
	p.second = 6;
	vector<pair<int, int>> digit { { 0, 6 }, { 1, 2 }, { 2, 5 } };
	sort(digit.begin(), digit.end(), [](const pair<int, int>& elem1, const pair<int, int>& elem2)
			{return elem1.second < elem2.second; });
	
	for (const auto& elem : digit)
		cout << elem.first << '\t' << elem.second << '\n';

	return 0;
}
