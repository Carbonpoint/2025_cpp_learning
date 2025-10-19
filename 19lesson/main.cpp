#include "date.h"
int f(){return 1;}
int main()
{
	//Date today;
	//int day;
	///today.month++;
	Date today = Date(25, 9, 2025);
	Date d(25, 9, 2026);:
	today.add_year(5);
	today.add_month(1);
	return 0;
}
