#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    cout << "Enter base for triangle: ";
    int base;
    cin >> base;

    cout << endl;

    for (int i = 0; i < base; ++i ) {
        cout << string(i + 1, '*');
        cout << endl;
    }
    return 0;
}