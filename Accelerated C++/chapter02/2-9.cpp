#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// this program will print 10, 9, 8, ..., -5
int main() {
    int number1;
    int number2;

    cout << "Enter two numbers. " << endl;
    cout << "Number 1: ";
    cin >> number1;

    cout << "Number 2: ";
    cin >> number2;
    
    if (number1 > number2) {
        cout << number1 << " is bigger than " << number2 << "." << endl;
    } else if (number2 > number1) {
         cout << number2 << " is bigger than " << number1 << "." << endl;
    } else {
        cout << "They are equal in value." << endl;
    }
    return 0;
}