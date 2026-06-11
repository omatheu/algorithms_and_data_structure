#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Print the maximum values of int and long long
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<long int>::max() << endl;
}