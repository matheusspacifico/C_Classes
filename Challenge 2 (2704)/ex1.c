#include <stdio.h>

void alterar(int *array, int tamanho){
    
    for(int i = 0; i <  tamanho; i++, array++){
        *array *= i;
    }
}


int main(){
    int tamanho;
    printf("\n");
    printf("Digite o tamanho do vetor: ");
    scanf("%d%*c", &tamanho);

    if(tamanho < 1){
        printf("O tamanho nao pode ser menor que 1!\n");
        return 1;
    }
    

    int array[tamanho];

    printf("\n");
    for(int i = 0; i < tamanho; i++){
        int valor;
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%d%*c", &valor);
        array[i] = valor;
    }

    printf("\nVetor principal: [ ");
    for(int i = 0; i < tamanho; i++){
        printf("%d", array[i]);
        if(i != (tamanho-1)){
            printf(", ");
        }
    }
    printf(" ]\n");

    alterar(array, tamanho);

    printf("\nVetor principal alterado: [ ");
    for(int i = 0; i < tamanho; i++){
        printf("%d", array[i]);
        if(i != (tamanho-1)){
            printf(", ");
        }
    }
    printf(" ]\n"); 

    return 0;

}