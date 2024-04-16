#include <stdio.h>

void trocarValores(int *num1, int *num2){
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int main(){
    int primeiro, segundo;

    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &primeiro);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &segundo);

    printf("Numero 1 antes da troca: %d\nNumero 2 antes da troca: %d\n", primeiro, segundo);

    trocarValores(&primeiro, &segundo);

    printf("Numero 1 depois da troca: %d\nNumero 2 depois da troca: %d\n", primeiro, segundo);

    return 0;
}
