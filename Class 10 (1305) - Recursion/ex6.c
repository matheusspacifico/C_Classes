#include <stdio.h>

int fatorial_recursivo(int x){
    if (x == 0)
    {
        return 1;
    }
    
    return x * fatorial_recursivo(x - 1);
}

int main(int argc, char const *argv[])
{
    int x, resultado;
    scanf("%d%*c", &x);
    
    resultado = fatorial_recursivo(x);
    printf("%d", resultado);
    return 0;
}
