#include <stdio.h>

int main(){

    // same as ex1 but using typedef

    typedef char string[31];
    typedef struct{
        string nome;
        string email;
        int idade;
        float salario;
    } pessoa;

    pessoa p1;

    printf("\n");
    printf("Digite o nome do caba: ");
    gets(p1.nome);
    printf("Digite o email do caba: ");
    gets(p1.email);
    printf("Digite a idade do caba: ");
    scanf("%d%*c", &p1.idade);
    printf("Digite o salario do caba: ");
    scanf("%f%*c", &p1.salario);
    
    printf("\n");
    printf("Dados do caba:\n");
    printf("%s\n", p1.nome);
    printf("%s\n", p1.email);
    printf("%d\n", p1.idade);
    printf("%.2f\n", p1.salario);
    printf("\n");

    return 0;
}
