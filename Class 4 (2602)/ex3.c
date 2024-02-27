#include <stdio.h>

int main(){
    int matriz[3][3];

    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d%*c", &matriz[i][j]);
        }
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int simetria = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] != matriz[j][i]){
                simetria = 0;
            }
        }
    }

    if(simetria){
        printf("Eh simetrica!\n");
    }else{
        printf("Nao eh simetrica!\n");
    }


    printf("\n");
}