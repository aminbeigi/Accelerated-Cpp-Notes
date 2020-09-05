#include <vector>
#include <iostream>

std::istream& read(std::istream& in, std::vector<double>& vec) {
	if (in) {
		vec.clear();

		double x;
		while (in >> x) {
			vec.push_back(x);
		}
		
		in.clear();
	}

	return in;
}

int main() {
	
	std::vector<double> vec;

	read(std::cin, vec);
	
	double sum = 0;
	int count = 0;
	for (auto i : vec) {
		sum += i;
		++count;
	}
	
	std::cout << "Average of inputted doubles: " << sum / count << std::endl;

	return 0;
}