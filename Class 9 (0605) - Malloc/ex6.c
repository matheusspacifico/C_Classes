#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[40];
    float nota1;
    float nota2;
} Aluno;

typedef struct{
    char nome[40];
    int qtdAlunos;
    Aluno *alunos;
} Disciplina;

int main(int argc, char const *argv[])
{
    int tamanho_disciplinas;
    printf("Digite o numero de disciplinas: ");
    scanf("%d%*c", &tamanho_disciplinas);

    Disciplina *vetor_disciplinas = (Disciplina *)malloc(tamanho_disciplinas * sizeof(Disciplina));
    if (vetor_disciplinas == NULL)
    {
        printf("Erro na alocacao.\n");
        exit(1);
    }

    for (int i = 0; i < tamanho_disciplinas; i++)
    {
        printf("Digite o nome da disciplina %d: ", i+1);
        gets(vetor_disciplinas[i].nome);
        printf("Digite a quantidade de alunos da disciplina %d: ", i+1);
        scanf("%d%*c", &vetor_disciplinas[i].qtdAlunos);

        vetor_disciplinas[i].alunos = (Aluno *)malloc(vetor_disciplinas[i].qtdAlunos * sizeof(Aluno));
        if (vetor_disciplinas[i].alunos == NULL)
        {
            printf("Erro na alocacao.\n");
            exit(1);
        }

        for (int j = 0; j < vetor_disciplinas[i].qtdAlunos; j++)
        {
            printf("Digite o nome do aluno %d: ", j+1);
            gets(vetor_disciplinas[i].alunos[j].nome);
            printf("Digite a primeira nota do aluno %d: ", j+1);
            scanf("%f%*c", &vetor_disciplinas[i].alunos[j].nota1);
            printf("Digite a segunda nota do aluno %d: ", j+1);
            scanf("%f%*c", &vetor_disciplinas[i].alunos[j].nota2);
        }
    }

    printf("\n\n");
    for (int i = 0; i < tamanho_disciplinas; i++)
    {
        printf("%s\n", vetor_disciplinas[i].nome);
        for (int j = 0; j < vetor_disciplinas[i].qtdAlunos; j++)
        {
            printf("\t%s:\n", vetor_disciplinas[i].alunos[j].nome);
            printf("\t\tNota 1: %2.f\n", vetor_disciplinas[i].alunos[j].nota1);
            printf("\t\tNota 2: %2.f\n", vetor_disciplinas[i].alunos[j].nota2);       
            printf("\t\tMedia: %.2f\n", (vetor_disciplinas[i].alunos[j].nota1 + vetor_disciplinas[i].alunos[j].nota2) / 2);  
        }
    }
    
    for (int i = 0; i < tamanho_disciplinas; i++)
    {
        for (int j = 0; j < vetor_disciplinas[i].qtdAlunos; j++)
        {
            free(vetor_disciplinas[i].alunos);
        }
    }
    free(vetor_disciplinas);

    return 0;
}
