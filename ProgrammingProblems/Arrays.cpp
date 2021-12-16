/*

	Programming problems : Arrays

	1.	Add numbers to an empty array.

	2.	Remove a number from an array.

	3.	Find the number that was removed
		and print the missing number.

	4.	Add the number that was removed 
		from the array at its respected
		index.

*/

#include "Arrays.h"
#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

void Arrays::BasicOperations() {
	// Initialize an empty array.
	std::vector<int> Numbers;

	// Add numbers 1-10 to an array.
	for (int i = 0; i < 10; i++) {
		Numbers.push_back(i + 1);
	}

	// Print out the array.
	std::cout << "Array after numbers added:" << std::endl;
	std::copy(Numbers.begin(), Numbers.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl << std::endl;

	// Remove a number from the array.
	Numbers.erase(Numbers.begin() + 4);

	// Print out the array.
	std::cout << "Array after number removed:" << std::endl;
	std::copy(Numbers.begin(), Numbers.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	// Find missing number from 1-10 
	// and add it back into the array.
	for (int i = 0; i < 10; i++) {
		if (i + 1 != Numbers[i]) {
			std::cout << std::endl << i + 1 << " is missing from Number array." << std::endl << std::endl;
			Numbers.insert(Numbers.begin() + i, { i + 1 });
		}
	}

	// Print out the array.
	std::cout << "Array after number added back:" << std::endl;
	std::copy(Numbers.begin(), Numbers.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}
