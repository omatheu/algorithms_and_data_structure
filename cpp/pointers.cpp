#include <iostream>

int main () {
    int x = 1000;
    int y = x;
    int& z = x;

    std::cout << "the value of z is>: "<< z << "\n";

    std::cout << &x << "\n";
    
    std::cout << &y << "\n";

    std::cout << &z << "\n";
    
    std::cout << "changing the value of z: ";

    std::cin >> z;

    std::cout << "testing to validate if the value of x changed: " << x;

    return 0;
}