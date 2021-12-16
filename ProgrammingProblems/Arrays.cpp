/*

	Programming problems : Basic

	1.	Add numbers to an empty array.

	2.	Remove a number from an array.

	3.	Find the number that was removed
		and print the missing number.

	4.	Add the number that was removed
		from the array at its respected
		index.
*/

#include "Arrays.h"
#include "Util.h"

void Arrays::Basic() {
	// Initialize an empty array.
	std::vector<int> Numbers;

	// Add numbers to an array.
	for (int i = 0; i < Util::RandomInRange(50); i++) {
		Numbers.push_back(i + 1);
	}

	// Print out the array.
	Util::Print("Array after numbers added:", Numbers);

	// Remove a number from the array.
	Numbers.erase(Numbers.begin() + Util::RandomInRange(static_cast<int>(Numbers.size())));

	// Print out the array.
	Util::Print("Array after number removed:", Numbers);

	// Find missing number from the array
	// and add it back into the array.
	for (int i = 0; i < static_cast<int>(Numbers.size()); i++) {
		if (i + 1 != Numbers[i]) {
			Util::Print(" is missing from Number array.", i + 1);
			Numbers.insert(Numbers.begin() + i, { i + 1 });
		}
	}

	// Print out the array.
	Util::Print("Array after number added back:", Numbers);
}

/*

	Programming problems : Duplication

	1.	Add a duplicate number to the
		array.

	2.	Find the duplicate number from
		the array and remove it.

*/

void Arrays::Duplication() {
	// Initialize an empty array.
	std::vector<int> Numbers;

	// Add numbers to an array.
	for (int i = 0; i < Util::RandomInRange(50); i++) {
		Numbers.push_back(i + 1);
	}

	// Add duplicate number into array.
	Numbers.insert(Numbers.begin() + Util::RandomInRange(static_cast<int>(Numbers.size())), Util::RandomInRange(static_cast<int>(Numbers.size())));

	// Print out the array.
	Util::Print("Array after duplicate number added:", Numbers);

	// Find duplicate number the array
	// and add it back into the array.
	for (int i = 0; i < static_cast<int>(Numbers.size()); i++) {
		if (i + 1 != Numbers[i]) {
			Util::Print(" is duplicate number in the Number array.", i);
			Numbers.erase(Numbers.begin() + i);
		}
	}

	// Print out the array.
	Util::Print("Array after duplicate number removed:", Numbers);

	// Add duplicate numbers into array.
	Numbers.insert(Numbers.begin() + Util::RandomInRange(static_cast<int>(Numbers.size())), Util::RandomInRange(static_cast<int>(Numbers.size())));
	Numbers.insert(Numbers.begin() + Util::RandomInRange(static_cast<int>(Numbers.size())), Util::RandomInRange(static_cast<int>(Numbers.size())));

	// Print out the array.
	Util::Print("Array after duplicate numbers added:", Numbers);

	// Find duplicate numbers the array
	// and remove it from array.
	for (int i = 0; i < static_cast<int>(Numbers.size()); i++) {
		if (i + 1 != Numbers[i]) {
			Util::Print(" is duplicate number in the Number array.", i);
			Numbers.erase(Numbers.begin() + i);
		}
	}

	// Print out the array.
	Util::Print("Array after duplicate numbers added:", Numbers);
}