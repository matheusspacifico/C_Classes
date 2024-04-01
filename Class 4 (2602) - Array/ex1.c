#include <stdio.h>

int main(){
    int vetor[8];
    int positivos[8] = {0};
    int negativos[8] = {0};

    printf("\n");
    printf("\n");
    printf("\n");

    for(int i = 0; i < 8; i++){
        printf("Digite o numero de posicao %d: ", i+1);
        scanf("%d%*c", &vetor[i]);
    }

    for(int i = 0; i < 8; i++){
        if(vetor[i] < 0){
            for(int j = 0; j < 8; j++){
                if(negativos[j] == 0){
                    negativos[j] = vetor[i];
                    break;
                }
            }
        } else if(vetor[i] > 0){
            for(int j = 0; j < 8; j++){
                if(positivos[j] == 0){
                    positivos[j] = vetor[i];
                    break;
                }
            }
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");

    printf("Vetor principal: [ ");
    for(int i = 0; i < 8; i++){
        printf("%d", vetor[i]);
        if(i != 7){
            printf(", ");
        }
    }
    printf(" ]");

    printf("\n");
    printf("\n");
    printf("\n");

    printf("Vetor positivo: [ ");
    for(int i = 0; i < 8; i++){
        printf("%d", positivos[i]);
        if(i != 7){
            printf(", ");
        }
    }
    printf(" ]");

    printf("\n");
    printf("\n");
    printf("\n");

    printf("Vetor negativo: [ ");
    for(int i = 0; i < 8; i++){
        printf("%d", negativos[i]);
        if(i != 7){
            printf(", ");
        }
    }
    printf(" ]");

    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}