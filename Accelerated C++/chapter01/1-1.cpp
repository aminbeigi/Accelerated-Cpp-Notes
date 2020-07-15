#include <iostream>
#include <string>

// valid program
int main() {
    const std::string hello = "Hello";
    const std::string message = hello + ", world" + "!";
    std::cout << message;

    return 0;
}