#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    cout << "Enter length of rectangle: ";
    int length;
    cin >> length;

    cout << "Enter height of rectangle: ";
    int height;
    cin >> height;
    cout << endl;

    for (int i = 0; i < height; ++i ) {
        cout << string(length, '*');
        cout << endl;
    }
    return 0;
}