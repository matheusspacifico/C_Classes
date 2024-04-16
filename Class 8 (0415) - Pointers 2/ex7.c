#include <stdio.h>

struct Produto{
    char nome[41];
    float preco;
};

struct ItemPedido{
    struct Produto produto;
    int quantidade;
};
    
void inserirItem(struct ItemPedido *pedido, int *tamanho){
    struct ItemPedido novoItem;
    
    if(*tamanho < 10){
        printf("Digite o nome do produto: ");
        gets(novoItem.produto.nome);

        printf("Digite o preco do produto: ");
        scanf("%f%*c", &novoItem.produto.preco);
        
        printf("Digite a quantidade: ");
        scanf("%d%*c", &novoItem.quantidade);

        pedido[*tamanho] = novoItem;

        (*tamanho)++;
    } else{
        printf("Impossivel adicionar mais itens! O pedido esta cheio.\n");
    }
        
}

void calcularExibir(struct ItemPedido *pedido, int tamanho){
    int i;
    float soma = 0;
    for (i = 0; i < tamanho; i++){
        soma += (pedido->produto.preco) * pedido->quantidade;
    }

    int j;
    printf("\n");
    printf("Pedido:\n");
    printf("\n");
    for(j = 0; j < tamanho; j++){
        printf("\tProduto %d:\n", j+1);
        printf("\t\tNome: %s\n", pedido->produto.nome);
        printf("\t\tPreco: %.2f", pedido->produto.preco);
        printf("\n");
    }
    printf("\n");
    printf("Preco total a pagar: %.2f", soma);
}

int main(){
    struct ItemPedido pedido[10];
    int tamanho = 0;
    int parar = 0;

    while(parar < 1){
        int opcao;

        printf("\n\n");
        printf("[1] - Inserir item\n");
        printf("[2] - Exibir produtos e calcular total a pagar\n");
        printf("[3] - Fim\n");
        printf("\n\n");

        scanf("%d%*c", &opcao);
        switch(opcao){
            case 1:
                inserirItem(pedido, &tamanho); // passando endereço de memória pra atualizar variavel sem copiar
                printf("voltei\n");
                break;
            case 2:
                calcularExibir(pedido, tamanho); // passando normal pois nao haverá alteraçoes
                break;
            case 3:
                parar++;
                break;
            default:
                printf("Entrada invalida! Tente novamente");
        }
    }

    return 0;
}