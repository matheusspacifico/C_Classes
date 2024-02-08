#include <stdio.h>

int main(){
    int RA;
    char nome[30];
    
    printf("Digite o RA: ");
    scanf("%d%*c", &RA);
    
    printf("Digite seu nome: ");
    gets(nome);
    
    printf("-------------------------\n");
    printf("RA: %d\n", RA);
    printf("NOME: %s\n", nome);
    
    return 0;
}
