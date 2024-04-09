#include <stdio.h>

int* maior_valor(int *vetor, int tamanho) {
    int *maior = vetor;
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            maior = &vetor[i];
        }
    }
    return maior;
}

int main() {
    int array[5] = {1, 2, 17, 28, 16};
    int *maior_elemento;

    maior_elemento = maior_valor(array, 5);
    printf("Maior elemento: %d\n", *maior_elemento);

    return 0;
}