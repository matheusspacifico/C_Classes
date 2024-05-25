#include <stdio.h>

int soma_recursiva(int a, int b){
    if (b == 0)
    {
        return a;
    }
    
    return soma_recursiva(a + 1, b - 1);
}

int main(int argc, char const *argv[])
{
    int a, b, resposta;
    printf("Digite A: ");
    scanf("%d%*c", &a);
    printf("Digite B: ");
    scanf("%d%*c", &b);

    resposta = soma_recursiva(a, b);
    printf("%d\n", resposta);
    return 0;
}
