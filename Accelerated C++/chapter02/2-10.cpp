#include <iostream>

int main() {
    int k = 0;
    int n = 5;
    while (k != n) {
        using std::cout;
        cout << "*";
        ++k;
    }
    std::cout << std::endl; // std:: is required here
    return 0;
}