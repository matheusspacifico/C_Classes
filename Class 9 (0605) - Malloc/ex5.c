#include <stdio.h>
#include <stdlib.h>

int *inteiro(){
    int *x = (int *)malloc(sizeof(int));
    if (x == NULL)
    {
        printf("Erro na alocacao.\n");
        exit(1);
    }
    
    printf("Digite: ");
    scanf("%d%*c", x); // nao se utiliza & pois é um ponteiro
    return x;
}



int main(int argc, char const *argv[])
{
    int *x;
    x = inteiro();
    printf("Resultado: %d", *x); // printar com * pois é um ponteiro
    free(x);
    return 0;
}
