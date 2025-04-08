#include <iostream>

void helloWorld();

// Let's add some more functionality to the program

void calculateSum(int a, int b) {
    std::cout << "The sum of " << a << " and " << b << " is: " << (a + b) << std::endl;
}
int main() {
    helloWorld();
    std::cout << "This is a simple C++ program." << std::endl;
    std::cout << "It demonstrates basic syntax and function usage." << std::endl;
    std::cout << "Feel free to modify and experiment with the code!" << std::endl;
    std::cout << "Happy coding!" << std::endl;
    calculateSum(5, 10);
    return 0;
}

void helloWorld() {
    std::cout << "Hello, World!" << std::endl;
}