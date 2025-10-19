#include <iostream>
#include <vector>

int main() {

	int arr[] = {1, 2, 3, 4, 0, 10, -2, -4};
	int size = sizeof(arr) / sizeof(arr[0]);

	std::vector<int> evenNonZeroElts;

	int* ptr = arr;

	for (int i = 0; i < size; ++i) {
		if (*ptr != && *ptr % 2 == 0) {
			evenNonZeroElts.push_back(*ptr);
        	}
        	++ptr; 
	}
    	std::cout << "Even non-zero elements: ";
    	for (int num : evenNonZeroElts) {
      		std::cout << num << " ";
    	}
    	std::cout << std::endl;

    	return 0;	
}
