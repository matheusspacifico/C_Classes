#include <stdio.h>

void maior_menor(int matriz[3][4], int *maior, int *menor){
    *maior = matriz[0][0];
    *menor = matriz[0][0];

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            if (matriz[i][j] > *maior) 
            {
                *maior = matriz[i][j];
            }
            
            if (matriz[i][j] < *menor) 
            {
                *menor = matriz[i][j];
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int matriz[3][4];
    int maior, menor;

    printf("\n");
    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 4; j++)
        {
            int entrada;
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d%*c", &entrada);
            matriz[i][j] = entrada;
        }
    }

    printf("\nValores da matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    maior_menor(matriz, &maior, &menor);
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
