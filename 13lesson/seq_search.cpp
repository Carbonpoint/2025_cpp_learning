#include<iostream>

//int* find(int []/* sequence */, int /* size */, int /* search key */); 

int* find(int a[], int size, int v)
{
	for (int i = 0; i <= size; i++) //loop over indices in the array looking at each one in order 'sequentialy'
		if (a[i] == v) return &a[i];
	std::cout << "Nothing found \n";

	return &a[size];
}	

int main()
{
	int a[6] = {-42, 3, 2, 101, -1};
	auto p = find(a, 5, 0);
	std::cout << *p << '\n';	
	return 0;
}

