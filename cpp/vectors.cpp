// teste de um caso em que uma realocação invalida um determinado ponteiro

#include <iostream>
#include <vector>

int main () {
    std::vector<int> v = {10, 20, 30};   // bloco A na memória
    int* ptr = &v[0];                    // ptr aponta pro 10, dentro do bloco A

    int* ptr1 = &v[0];

    int a = 10, *b = &a;

    int dez = 10;

    int* e = &dez;

    //std::cout << ++*e << '\n';

    std::cout << *e++ << '\n';



    // capacity
    std::cout << v.capacity() << std::endl; // 3

    std::cout << *ptr << std::endl; // imprime 10. Valor correto, ptr aponta pro bloco A

    std::cout << ptr << std::endl;

    v.push_back(40);   // estava cheio → realoca!
                    // aloca bloco B, copia 10,20,30,40 pra lá, LIBERA bloco A

    std::cout << *ptr << std::endl; // ptr ainda aponta pro bloco A... que não existe mais
                    // → undefined behavior (dangling pointer)

    std::cout << v.capacity();

    return 0;
}