#include <iostream>

// this program will print 10, 9, 8, ..., -5
int main() {
    for (int i = 10; i >= -5; --i) {
        std::cout << i << std::endl;
    }
    return 0;
}