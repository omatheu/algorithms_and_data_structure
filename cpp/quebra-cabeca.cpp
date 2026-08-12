#include <iostream>

using namespace std;

int main () {
    int a = 10, b = 11;

    a = b++;

    cout << a << '\n';
    cout << b;
}