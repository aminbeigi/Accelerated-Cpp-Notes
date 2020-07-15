#include <iostream>
#include <string>

// valid program
// move initialisation of x to 2nd left brace
int main() {
    {
        std::string s = "a string";
        std::string x = s + ", really";
        {
            // std::string x = s + ", really";
            std::cout << s << std::endl;
        }
        std::cout << x << std::endl;
    }
    return 0;
}