#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
    int qntd;
    while(1){
        printf("Qtnd de strings: ");
        scanf("%d%*c", &qntd);
        if(qntd > 0){
            break;
        }else{
            printf("Quantidade invalida. Tente novamente.\n");
        }
    }

    char strings[qntd][41];
    for(int i = 0; i < qntd; i++){
        printf("Digite a string %d: ", i+1);
        gets(strings[i]);
    }

    int soma = 0;
    for(int i = 0; i < qntd; i++){
        soma += strlen(strings[i]);
    }
    printf("Total geral de caracteres: %d\n", soma);

    char primeiraString[41];
    char ultimaString[41];

    strcpy(primeiraString, strings[0]);
    strcpy(ultimaString, strings[0]);

    for(int i = 1; i < qntd; i++){
        if(strcmp(strings[i], primeiraString) < 0){
            strcpy(primeiraString, strings[i]);
        }
        if(strcmp(strings[i], ultimaString) > 0){
            strcpy(ultimaString, strings[i]);
        }
    }

    puts(primeiraString);
    puts(ultimaString);
    return 0;
}
