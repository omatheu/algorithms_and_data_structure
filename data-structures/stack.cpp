#include <iostream>
#include <stack>
using namespace std;

class Stack {
};

class stackBuiltIn {
    std::stack<int> numbers;

public:
    stackBuiltIn() {
        numbers.push(1);
        numbers.push(2);
        numbers.push(3);
        cout << "Top element: " << numbers.top() << endl; // Output: 3
        numbers.pop();
    }
};