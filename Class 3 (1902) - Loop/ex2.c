#include <stdio.h>

int eh_primo(int entrada);

int main(){
    int num, resultado;


    for (int j = 0; j < 50; j++){
        printf("-");
    }
    printf("\n");

    printf("Digite um numero: ");
    scanf("%d%*c", &num);
    if (num <= 1){
        printf("Nao eh primo!\n");
    } else{
        resultado = eh_primo(num);
        if(resultado == 1){
            printf("Eh primo!\n");
        } else{
            printf("Nao eh primo!\n");
        }
    }

    for (int j = 0; j < 50; j++){
        printf("-");
    }
    printf("\n");
}

int eh_primo(int entrada){
    for (int i = 2; i <= entrada * 0.5; i++) {
        if (entrada % i == 0) {
            return 0;
        }
    }
    return 1;
}