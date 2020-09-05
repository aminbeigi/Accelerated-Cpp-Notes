#include <iostream>
#include <iomanip>
#include <string>

int main() {
	for (int i = 1000; i <= 10000; ++i) {

		std::cout << std::setw(std::to_string(i).length()*2) << i << std::setw(std::to_string(i * i).length()*2) << i * i << std::endl;
	}
	return 0;
}