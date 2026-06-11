#include <iostream>
#include <chrono>

void execution_time1() {
    auto start_time = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 1000; i++) {
        std::cout << i << std::endl;
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    auto execution_time = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
    std::cout << "Time of execution: " << execution_time.count() << " microseconds" << std::endl;    
}

void execution_time2() {
    auto start_time = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 1000; i++) {
        std::cout << i << '\n';
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    auto execution_time = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
    std::cout << "Time of execution: " << execution_time.count() << " microseconds" << std::endl;    
}

int main() {
    execution_time1();
    execution_time2();
    return 0;
}