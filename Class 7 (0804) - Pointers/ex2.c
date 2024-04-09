#include <stdio.h>

int retornar_tamanho(char *string){
    int i, tamanho;
    tamanho = 0;

    for(i = 0; string[i] != '\0'; i++){
        printf("%c", string[i]);
        tamanho++;
    }

    return tamanho;
}

int main(){
    char luva[] = "se foda";
    char *pluva = luva;
    int tamanho;

    tamanho = retornar_tamanho(pluva);

    printf("\nA string tem tamanho: %d", tamanho);

    return 0;
}