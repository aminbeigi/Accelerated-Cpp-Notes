#include <iostream>
#include <vector>
#include <string>

std::istream& read(std::istream& in, std::vector<std::string>& words) {
	if (in) {
		// get rid of previous contents
		words.clear();

		// read input string one by one, and append to vector<string> container
		std::string x;
		while (in >> x)
			words.push_back(x);

		// clear the stream error status (if any) so that input will work for the next set of inputs
		in.clear();
	}
	return in;
}

int main() {
	std::vector<std::string> vec;

	read(std::cin, vec);

	int count = 0;
	for (auto i : vec) {
		std::cout << i;
		++count;
	}

	std::cout << "Total number of words: " << count << std::endl;
}