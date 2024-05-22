#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int tamanho;
    printf("Digite a qtnd de strings que tera no vetor: ");
    scanf("%d%*c", &tamanho);

    char **vetor = (char **)malloc(tamanho * sizeof(char *));
    if (vetor == NULL)
    {
        printf("Houve um problema na alocacao de memoria!\n");
        exit(1);
    }
    
    for (int i = 0; i < tamanho; i++)
    {
        char buffer[100];

        printf("Digite a string numero %d: ", i+1);
        gets(buffer);
        int buffer_size = strlen(buffer);
        
        vetor[i] = (char *)malloc(buffer_size * sizeof(char));
        if (vetor[i] == NULL)
        {
            printf("Houve um problema na alocacao de memoria!\n");
            exit(1);
        }
        
        strcpy(vetor[i], buffer);
    }
    
    printf("Vetor final = [ ");
    for (int i = 0; i < tamanho; i++)
    {
        if (i != (tamanho -1))
        {
            printf("\"%s\", ", vetor[i]);
            continue;
        }
        printf("\"%s\" ]\n", vetor[i]);
    }
    
    for (int i = 0; i < tamanho; i++)
    {
        free(vetor[i]);
    }
    free(vetor);
    
    return 0;
}
