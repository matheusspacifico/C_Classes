#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[31];
    char fabricante[31];
    int estoque;
} PRODUTO;

PRODUTO **criaMatriz(int estantes, int prateleiras)
{
    PRODUTO **matriz = (PRODUTO **)malloc(estantes * sizeof(PRODUTO *));
    if (matriz == NULL)
    {
        printf("Erro na alocacao de memoria para estantes.\n");
        exit(1);
    }
    
    for (int i = 0; i < estantes; i++)
    {
        matriz[i] = (PRODUTO *)malloc(prateleiras * sizeof(PRODUTO));
        if (matriz[i] == NULL)
        {
            printf("Erro na alocacao de memoria para prateleiras.\n");
            exit(1);
        }
    }

    return matriz;
}

void digitaMatriz(int estantes, int prateleiras, PRODUTO **matriz)
{
    for (int i = 0; i < estantes; i++)
    {
        printf("Estante %d:\n", i+1);
        for (int j = 0; j < prateleiras; j++)
        {
            printf("\tPrateleira %d:\n", j+1);
            printf("\t\tDigite o nome do produto %d: ", j+1);
            gets(matriz[i][j].nome);
            printf("\t\tDigite o nome do fabricante do produto %d: ", j+1);
            gets(matriz[i][j].fabricante);
            printf("\t\tDigite a quantidade do estoque do produto %d: ", j+1);
            scanf("%d%*c", &matriz[i][j].estoque);
        }
    }

    printf("\n\nDados digitados...\n");
    for (int i = 0; i < estantes; i++)
    {
        printf("Estante %d:\n", i+1);
        for (int j = 0; j < prateleiras; j++)
        {
            printf("\tPrateleira %d:\n", j+1);
            printf("\t\tNome do produto %d: %s\n", j+1, matriz[i][j].nome);
            printf("\t\tFabricante do produto %d: %s\n", j+1, matriz[i][j].fabricante);
            printf("\t\tEstoque do produto %d: %d\n", j+1, matriz[i][j].estoque);
        }
    }    
}

void estoqueMinimo(int estantes, int prateleiras, PRODUTO **matriz, int minimo)
{
    int flag = 0;

    printf("Itens que estao abaixo do estoque minimo...\n");
    for (int i = 0; i < estantes; i++)
    {
        for (int j = 0; j < prateleiras; j++)
        {
            if (matriz[i][j].estoque < minimo)
            {
                flag = 1;
                printf("Estante %d, Prateleira %d:\n", i+1, j+1);
                printf("\tProduto: %s\n", matriz[i][j].nome);
                printf("\tFabricante: %s\n", matriz[i][j].fabricante);
                printf("\tEstoque: %d\n", matriz[i][j].estoque);
            }
        }
    }

    if (!flag)
    {
        printf("Nenhum item esta abaixo do estoque minimo!\n");
    }
}

int main()
{
    int estantes, prateleiras;
    printf("Digite o numero de estantes disponiveis: ");
    scanf("%d%*c", &estantes);
    printf("Digite o numero de prateleiras disponiveis: ");
    scanf("%d%*c", &prateleiras);

    PRODUTO **matriz = criaMatriz(estantes, prateleiras);
    printf("\n\n");
    digitaMatriz(estantes, prateleiras, matriz);

    int minimo;
    printf("\n\nDigite o valor do estoque minimo: ");
    scanf("%d%*c", &minimo);
    printf("\n\n");
    estoqueMinimo(estantes, prateleiras, matriz, minimo);

    for (int i = 0; i < estantes; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    
    system("pause");
    return 0;
}
