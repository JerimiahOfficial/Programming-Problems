/*

	Programming problems : Arrays

	1.	Add numbers to an empty array.

	2.	Remove a number from an array.

	3.	Find the number that was removed
		and print the missing number.

	4.	Add the number that was removed 
		from the array at its respected
		index.

	5.	Add a duplicate number to the 
		array.

	6.	Find the duplicate number from
		the array and remove it.
*/

#include "Arrays.h"
#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <time.h>

int random() {
	// Create a random number.
	std::srand(static_cast<unsigned int>(time(NULL)));
	return std::rand() % 50 + 2;
}

int randomInRange(int size) {
	// Create a random number.
	std::srand(static_cast<unsigned int>(time(NULL)));
	return std::rand() % size + 1;
}

void Arrays::BasicOperations() {
	// Initialize an empty array.
	std::vector<int> Numbers;

	// Add numbers to an array.
	for (int i = 0; i < random(); i++) {
		Numbers.push_back(i + 1);
	}

	// Print out the array.
	std::cout << "Array after numbers added:" << std::endl;
	std::copy(Numbers.begin(), Numbers.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl << std::endl;

	// Remove a number from the array.
	Numbers.erase(Numbers.begin() + randomInRange(static_cast<int>(Numbers.size())));

	// Print out the array.
	std::cout << "Array after number removed:" << std::endl;
	std::copy(Numbers.begin(), Numbers.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	// Find missing number from the array
	// and add it back into the array.
	for (int i = 0; i < static_cast<int>(Numbers.size()); i++) {
		if (i + 1 != Numbers[i]) {
			std::cout << std::endl << i + 1 << " is missing from Number array." << std::endl << std::endl;
			Numbers.insert(Numbers.begin() + i, { i + 1 });
		}
	}

	// Print out the array.
	std::cout << "Array after number added back:" << std::endl;
	std::copy(Numbers.begin(), Numbers.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl << std::endl;

	// Add duplicate number into array.
	Numbers.insert(Numbers.begin() + randomInRange(static_cast<int>(Numbers.size())), randomInRange(static_cast<int>(Numbers.size())));

	// Print out the array.
	std::cout << "Array after duplicate number added:" << std::endl;
	std::copy(Numbers.begin(), Numbers.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	// Find duplicate number the array 
	// and add it back into the array.
	for (int i = 0; i < static_cast<int>(Numbers.size()); i++) {
		if (i + 1 != Numbers[i]) {
			std::cout << std::endl << i << " is duplicate number in the Number array." << std::endl << std::endl;
			Numbers.erase(Numbers.begin() + i);
		}
	}

	// Print out the array.
	std::cout << "Array after duplicate number removed:" << std::endl;
	std::copy(Numbers.begin(), Numbers.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}
