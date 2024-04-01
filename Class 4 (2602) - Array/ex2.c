#include <stdio.h>

int main(){
    int A[8];
    int B[8];
    int C[16];

    printf("\n");
    printf("\n");
    printf("\n");

    for(int i = 0; i < 8; i++){
        printf("Digite o numero de posicao %d no vetor A: ", i+1);
        scanf("%d%*c", &A[i]);
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for(int i = 0; i < 8; i++){
        printf("Digite o numero de posicao %d no vetor B: ", i+1);
        scanf("%d%*c", &B[i]);
    }

    printf("\n");
    printf("\n");
    printf("\n");
    
    int j = 0;
    for (int i = 0; i < 8; i++) {
        if (i % 2 == 0) {
            C[j] = A[i];
        } else {
            C[j] = B[i];
        }
        j++;
    }
    for (int i = 0; i < 8; i++) {
        if (i % 2 == 1) {
            C[j] = A[i];
        } else {
            C[j] = B[i];
        }
        j++;
    }

    printf("\n");
    printf("\n");
    printf("\n");

    printf("Vetor A: [ ");
    for(int i = 0; i < 8; i++){
        printf("%d", A[i]);
        if(i != 7){
            printf(", ");
        }
    }
    printf(" ]");

    printf("\n");
    printf("\n");
    printf("\n");

    printf("Vetor B: [ ");
    for(int i = 0; i < 8; i++){
        printf("%d", B[i]);
        if(i != 7){
            printf(", ");
        }
    }
    printf(" ]");

    printf("\n");
    printf("\n");
    printf("\n");

    printf("Vetor C: [ ");
    for(int i = 0; i < 16; i++){
        printf("%d", C[i]);
        if(i != 15){
            printf(", ");
        }
    }
    printf(" ]");

    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}