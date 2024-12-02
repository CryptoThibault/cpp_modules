#include "Array.hpp"

int main() {
	try {
		std::cout << "Testing with int:" << std::endl;
		Array<int> intArray(3);
		for (unsigned int i = 0; i < intArray.size(); i++)
			intArray[i] = i * 10;
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;

		std::cout << "\nTesting with std::string:" << std::endl;
		Array<std::string> stringArray(3);
		stringArray[0] = "One";
		stringArray[1] = "Two";
		stringArray[2] = "Three";
		for (unsigned int i = 0; i < stringArray.size(); i++)
			std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;

		std::cout << "\nTesting out-of-bounds access:" << std::endl;
		std::cout << intArray[5] << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
