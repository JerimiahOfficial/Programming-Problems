#include "Util.h"

void Util::Print(std::string msg, std::vector<int> array) {
	std::cout << msg << std::endl;

	std::copy(array.begin(), array.end(), std::ostream_iterator<int>(std::cout, " "));

	std::cout << std::endl << std::endl;
}

void Util::Print(std::string msg, int index) {
	std::cout << index << msg << std::endl << std::endl;
}

int Util::RandomInRange(int i) {
	std::srand(static_cast<unsigned int>(time(NULL)));
	return std::rand() % i + 1;
}
