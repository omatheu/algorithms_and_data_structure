#include <cstdio>

constexpr int quadrado(int n) {
    return n * n;
}

int main() {
    constexpr int kChunkSize = 32;
    constexpr int area = quadrado(kChunkSize);

    printf("area = %d\n", area);
    return 0;
}
