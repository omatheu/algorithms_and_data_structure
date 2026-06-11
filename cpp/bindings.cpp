#include <iostream>

void multiply(int a, int b) {
    std::cout << "The product of " << a << " and " << b << " is: " << a * b << std::endl;
}

int main() {
    auto multiply_numbers_by_2_with_bind = std::bind(multiply, 2, std::placeholders::_1);
    multiply_numbers_by_2_with_bind(5); // This will multiply 2 by 5 and print the result

    return 0;
}