#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenar(char **string_um, char *string_dois)
{
	int tamanho = strlen(*string_um) + strlen(string_dois);
    
    *string_um = (char *)realloc(*string_um, tamanho * sizeof(char));
    strcat(*string_um, string_dois);
}


int main(int argc, char const *argv[])
{
    char *string_um = (char *)malloc(20 * sizeof(char));
    char *string_dois = (char *)malloc(20 * sizeof(char));

    if (string_um == NULL || string_dois == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        exit(0);
    }
    
    printf("Digite o valor da primeira string: ");
    gets(string_um);
    printf("Digite o valor da segunda string: ");
    gets(string_dois);

    concatenar(&string_um, string_dois);
    printf("Resultado: %s\n", string_um);

    free(string_um);
    free(string_dois);

    return 0;
}
