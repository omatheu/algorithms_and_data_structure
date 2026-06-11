// teste de um caso em que uma realocação invalida um determinado ponteiro

#include <iostream>
#include <vector>

int main () {
    std::vector<int> v = {10, 20, 30};   // bloco A na memória
    int* ptr = &v[0];                    // ptr aponta pro 10, dentro do bloco A

    std::cout << *ptr << std::endl; // imprime 10. Valor correto, ptr aponta pro bloco A

    v.push_back(40);   // estava cheio → realoca!
                    // aloca bloco B, copia 10,20,30,40 pra lá, LIBERA bloco A

    std::cout << *ptr; // ptr ainda aponta pro bloco A... que não existe mais
                    // → undefined behavior (dangling pointer)

    return 0;
}