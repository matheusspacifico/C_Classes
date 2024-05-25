#include <stdio.h>

int soma_n_inteiros(int x){
    if (x == 0)
    {
        return 0;
    }
    return x + soma_n_inteiros(x - 1);
}

int main(int argc, char const *argv[])
{
    int x, resultado;
    printf("Qntds n inteiros quer calcular? ");
    scanf("%d%*c", &x);
    if (x < 0)
    {
        printf("O n precisa ser 0 ou mais!\n");
        return 1;
    }
    resultado = soma_n_inteiros(x);
    printf("%d\n", resultado);
    return 0;
}
