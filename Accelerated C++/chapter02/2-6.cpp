#include <iostream>

// this program will print 1, 2, 3, ..., 10
int main() {
    int i = 0;
    while (i < 10) {
        i += 1;
        std::cout << i << std::endl;
    }
    return 0;
}