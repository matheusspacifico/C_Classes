#include <stdio.h>
#include <stdlib.h>

char *retornar_segunda(char *string){

    int tamanho_inicial = strlen(string);
    int tamanho_final = 0;
    int flag = 0;
    int start = 0;

    for (int i = 0; i < tamanho_inicial; i++)
    {
        if (string[i] == ' ' && flag == 0)
        {
            flag++;
            start = i + 1;
        }
        
        if (flag)
        {
            tamanho_final++;
        }
    }

    if (!flag)
    {
        printf("A string nao contem espaco!\n");
        exit(1);
    }

    char *final = (char *)malloc((tamanho_final + 1) * sizeof(char));
    if (final == NULL)
    {
        printf("Houve um erro na alocacao de memoria.\n");
        exit(1);
    }

    for (int i = 0; i < tamanho_final; i++)
    {
        final[i] = string[start + i];
    }
    final[tamanho_final - 1] = '\0';
    
    return final;
}

int main(int argc, char const *argv[])
{
    char string[50];

    printf("Digite duas palavras separadas por espaco: ");
    gets(string);

    char *final;
    final = retornar_segunda(string);

    printf("Resultado: %s\n", final);
    free(final);

    return 0;
}
