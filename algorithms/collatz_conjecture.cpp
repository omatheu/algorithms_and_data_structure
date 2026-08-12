#include <iostream>

using namespace std;

// O que acontece quando o programa sobrecarrega o tipo de uma variável é: o sistema busca o menor valor conhecido do tipo
// Exemplo: sai do MAX_INT + 1 (maior valor permitido para inteiro mais um) e mostra INT_MIN (menor valor negativo possível para o tipo)

int main() {
    long long n;
    cout <<  "Enter a value between -715827882 and 715827882: "; //limit of long long type
    cin >> n;
    while (true) {
        cout << n << " ";
        if (n == 1) break;
        if (n > 715827882 || n < -715827882) {
            cout << "\nValue out of range. Please enter a value between -715827882 and 715827882.\n";
            return 1;
        }
        if (n%2 == 0) n /= 2;
        else n = n*3+1;
    }
    cout << "\n";
}