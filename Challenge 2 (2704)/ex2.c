#include <stdio.h>

typedef struct
{
    char nome[40];
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcular(Aluno *array, int tamanho)
{
    for (int i = 0; i < tamanho; i++, array++)
    {
        array->media = (array->nota1 + array->nota2) / 2;
    }
}


int main(int argc, char const *argv[])
{
    int tamanho;
    printf("\n");
    printf("Digite o tamanho do vetor: ");
    scanf("%d%*c", &tamanho);
    printf("\n");

    if(tamanho < 1){
        printf("O tamanho nao pode ser menor que 1!\n");
        return 1;
    }

    Aluno array[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o nome do aluno %d: ", i+1);
        gets(array[i].nome);
        printf("Digite a nota 1 do aluno %d: ", i+1);
        scanf("%f%*c", &array[i].nota1);
        printf("Digite a nota 2 do aluno %d: ", i+1);
        scanf("%f%*c", &array[i].nota2);
        printf("\n");
    }
    
    calcular(array, tamanho);

    printf("\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Aluno: %s\n", array[i].nome);
        printf("Nota 1: %.2f\n", array[i].nota1);
        printf("Nota 2: %.2f\n", array[i].nota2);
        printf("Media: %.2f\n", array[i].media);
        printf("Situacao: ");

        if (array[i].media >= 6.0) {printf("APROVADO");}
        if ((array[i].media >= 4) && (array[i].media < 6)) {printf("PROVA FINAL");}
        if (array[i].media < 4) {printf("REPROVADO");}
        
        printf("\n\n");
    }

    return 0;
}
