#include <stdio.h>

int main(){
    int x, z;
    int fatorial = 1;

    for (int j = 0; j < 50; j++){
        printf("-");
    }
    printf("\n");

    printf("Digite um numero: ");
    scanf("%d%*c", &x);

    if(x < 0){
        printf("Digite um  numero positivo!\n");
    } else if(x == 0){
        printf("1\n");
    } else{
        for(int k = x; k > 0; k--){
            fatorial *= k;
        }
    }

    printf("%d\n", fatorial);

    for (int j = 0; j < 50; j++){
        printf("-");
    }
    printf("\n");
}