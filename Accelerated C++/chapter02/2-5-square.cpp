#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    cout << "Enter length of square: ";
    int length;
    cin >> length;

    cout << endl;

    for (int i = 0; i < length; ++i ) {
        cout << string(length, '*');
        cout << endl;
    }
    return 0;
}