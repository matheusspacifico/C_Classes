#include <stdio.h>

int somar(int *vetor, int tamanho){
    int soma = 0, i;
    for(i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    return soma;
}

int main(){
    int vetor_games_da_silva_luva_de_pedreiro[5] = {2, 2, 2, 2, 2};
    int *pvetor = vetor_games_da_silva_luva_de_pedreiro;
    int soma;

    soma = somar(pvetor, 5);
    printf("%d", soma);
    return 0;
}