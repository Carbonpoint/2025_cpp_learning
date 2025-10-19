#include <iostream>

double grade(double midterm, double fin, double homework)
{
	return 0.2 * midterm + 0.4 * fin + 0.4 * homework;
}

int Max(int x, int y)
{
	return x > y ? x : y;
}

int main ()
{
	std::cout << "Enter the grade of midterm, final_exam, and homework: ";
	float x;
	float y;
	float z;
	std::cin >> x >> y >> z;
	auto final_grade = grade(x, y, z);
	std::cout >> "Student's final grade is: " << final_grade << '\n';
	return 0;
}
