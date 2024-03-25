#include <stdio.h>

int main(){
    typedef char string[31];
    typedef struct{
        string nome;
        string email;
        int idade;
        float salario;
    } pessoa;

    pessoa galera[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("\n");
        printf("Digite o nome do caba %d: ", i+1);
        gets(galera[i].nome);
        printf("Digite o email do caba %d: ", i+1);
        gets(galera[i].email);
        printf("Digite a idade do caba %d: ", i+1);
        scanf("%d%*c", &galera[i].idade);
        printf("Digite o salario do caba %d: ", i+1);
        scanf("%f%*c", &galera[i].salario);        
    }
    
    for(i = 0; i < 5; i++){
        printf("\n");
        printf("Dados do caba %d:\n", i+1);
        printf("%s\n", galera[i].nome);
        printf("%s\n", galera[i].email);
        printf("%d\n", galera[i].idade);
        printf("%.2f\n", galera[i].salario);
        printf("\n");
    }

    return 0;
}
