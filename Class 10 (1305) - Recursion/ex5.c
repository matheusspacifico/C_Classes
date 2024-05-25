#include <stdio.h>

float somatoria_recursiva(int numerador, int denominador){
    if (numerador == 1 && denominador == 1)
    {
        return 1;
    }
    return ((float) numerador / denominador) + somatoria_recursiva(numerador - 1, denominador - 2);
}

int main(int argc, char const *argv[])
{
    int n = 2;
    int d = 3;

    printf("%.2f\n", somatoria_recursiva(n, d));
    return 0;
}
