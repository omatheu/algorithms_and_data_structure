#include <iostream>
#include <typeinfo>

int main () {
    // BLOCO 1 - TIPO RESOLVIDO EM TEMPO DE COMPILAÇÃO
    // Block 1 - type resolved at compile time

    int x = 10;
    std::cout << "[compilacao] x = " << x
        << " | sizeof(x) = "<< sizeof(x) << " bytes\n";

    // Bloco 2 - in the memory there is only bytes (without type)
    float f = 3.14f;

    // Pega o MESMO endereço e reinterpreta os bytes como int.
    // Nada na RAM mudou — só a "lente" com que o compilador lê.
    int* lente_int = reinterpret_cast<int*>(&f);

    std::cout << "\n[runtime] f como float = " << f << "\n";
    std::cout << "[runtime] os mesmos bytes lidos como int = " << *lente_int << "\n";
    
    return 0;
}