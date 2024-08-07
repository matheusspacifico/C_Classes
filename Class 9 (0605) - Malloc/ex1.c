#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenar(char *primeira, char *segunda){  
    int tamanho = (strlen(primeira) + strlen(segunda)); 

    char *final = (char *)malloc((tamanho + 1) * sizeof(char)); //+1 por conta do terminador
    if (final == NULL)
    {
        printf("Erro na alocacao de memoria!\n");
        exit(1);
    }
    
    strcpy(final, primeira); //passando a primeira pra final
    strcat(final, segunda); //concatenando com a segunda

    return final;
}

int main(int argc, char const *argv[])
{
    char primeira[20];
    char segunda[20];

    printf("Digite a primeira string: ");
    gets(primeira);
    printf("Digite a segunda string: ");
    gets(segunda);

    char *final;
    final = concatenar(primeira, segunda);
    printf("Strings concatenadas usando alocacao dinamica: %s\n", final);

    free(final);
    return 0;
}