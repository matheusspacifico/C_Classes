#include <stdio.h>
#include <string.h>

typedef char string[41];

typedef struct{
    string nome;
    float n1;
    float n2;
    string email;
    float media;
} boletim;

boletim operar(string nome, float n1, float n2, string email){
    boletim aluno;

    strcpy(aluno.nome, nome);
    aluno.n1 = n1;
    aluno.n2 = n2;
    strcpy(aluno.email, email);
    aluno.media = (n1 + n2) / 2.0;

    return aluno;
}

int main(){
    string nome, email;
    float n1, n2;

    printf("Digite o nome do aluno: ");
    gets(nome);
    printf("Digite a primeira nota do aluno: ");
    scanf("%f%*c", &n1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f%*c", &n2);
    printf("Digite o email do aluno: ");
    gets(email);

    boletim aluno = operar(nome, n1, n2, email);

    printf("\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Nota 1: %.2f\n", aluno.n1);
    printf("Nota 2: %.2f\n", aluno.n2);
    printf("Email: %s\n", aluno.email);
    printf("Media Final: %.2f\n", aluno.media);
    printf("\n");

    return 0;
}