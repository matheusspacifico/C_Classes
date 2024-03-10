// Put N numbers of Fibonacci Sequence inside of an Array, and print it out

#include <stdio.h>

int main(){
    int quantidade, ant1, ant2, atual;
    ant1 = 1;
    ant2 = 0;
    
    printf("Sequencia de Fibonacci\n");
    printf("Digite quantos termos deseja calcular: ");
    scanf("%d", &quantidade);

    int array[quantidade];

    for(int i = 0; i < quantidade; i++){
        if(i == 0){
            array[0] = ant2;
            continue;
        }
        if(i == 1){
            array[1] = ant1;
            continue;
        }

        atual = ant1 + ant2;
        array[i] = atual;
        ant2 = ant1;
        ant1 = atual;
    }

    printf("[ ");
    for(int i = 0; i < quantidade; i++){
        printf("%d", array[i]);
        if(i != quantidade-1){
            printf(", ");
        }
    }
    printf(" ]\n");

    return 0;
}