#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *string_um = (char *)malloc(20 * sizeof(char));

    if (string_um == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        exit(0);
    }
    
    printf("Digite o valor da primeira string: ");
    gets(string_um);

    printf("Resultado: %s\n", string_um);

    free(string_um);
    
    return 0;
}