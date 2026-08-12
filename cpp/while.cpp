#include <iostream>

int main () {
    int counter = 0;

    do {
        std::cout << "Counter: " << counter << std::endl;
        counter++;
    } while (counter > 5);
    
    return 0;
}