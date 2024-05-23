#include <stdio.h>
#include <stdlib.h>

char *characters_to_string(){

    int tamanho = 0;
    char *final = (char *)malloc((tamanho + 1) * sizeof(char));
    if (final == NULL)
    {
        printf("Houve um problema na alocacao de memoria, encerrando.\n");
        exit(1);
    }
    
    char c = getchar();

    final[tamanho] = c;
    tamanho++;

    c = getchar();
    while (c != '\n')
    {
        final = realloc(final, (tamanho + 1));
        if (final == NULL)
        {
            printf("Houve um problema na alocacao de memoria, encerrando.\n");
            exit(1);
        }
        
        final[tamanho] = c;
        tamanho++;
        c = getchar();
    }

    final = realloc(final, (tamanho + 1));
    if (final == NULL)
    {
        printf("Houve um problema na alocacao de memoria, encerrando.\n");
        exit(1);
    }
    final[tamanho] = '\0';
    return final;
}

int main(int argc, char const *argv[])
{
    char *final;
    final = characters_to_string();
    
    printf("Resultado: %s\n", final);
    free(final);

    return 0;
}
