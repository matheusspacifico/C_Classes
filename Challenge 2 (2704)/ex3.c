#include <stdio.h>

typedef struct
{
    char nome[40];
    float nota1;
    float nota2;
    float media;
} Aluno;

Aluno *calcular_maior_media(Aluno *array, int tamanho){
    float maior_media = array->media;
    Aluno *aluno_maior_media = array;

    for (int i = 0; i < tamanho; i++, array++)
    {
        if (array->media > maior_media) 
        {
            maior_media = array->media;
            aluno_maior_media = array;
        }
    }

    return aluno_maior_media;
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
        array[i].media = (array[i].nota1 + array[i].nota2) / 2;
        printf("\n");
    }

    Aluno *maior_media = calcular_maior_media(array, tamanho);
    printf("Aluno com maior media:\n");
    printf("Nome: %s\n", maior_media->nome);
    printf("Nota 1: %.2f\n", maior_media->nota1);
    printf("Nota 2: %.2f\n", maior_media->nota2);
    printf("Media: %.2f\n", maior_media->media);

    return 0;
}