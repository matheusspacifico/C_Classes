#include <stdio.h>

int potencia_recursiva(int base, int expoente){
    if (expoente == 0)
    {
        return 1;
    }
    return base * potencia_recursiva(base, expoente - 1);
}

int main(int argc, char const *argv[])
{
    int x, n, resultado;
    printf("Digite a base: ");
    scanf("%d%*c", &x);
    printf("Digite o expoente: ");
    scanf("%d%*c", &n);
    
    resultado = potencia_recursiva(x, n);
    printf("%d\n", resultado);

    return 0;
}
