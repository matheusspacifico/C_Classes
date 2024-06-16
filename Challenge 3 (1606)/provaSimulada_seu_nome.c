

//
// Questão 1 (2,0 pontos):
//
//
// NA PROVA DE VERDADE TERÁ UMA QUESTÃO TEÓRICO-PRÁTICA AQUI.
// RESPONDA COMO COMENTÁRIO LOGO ABAIXO, COMO INDICADO.
//
//

/*


          Digite sua resposta aqui...


                                                                  */

/////////////////////////////////////////////////////////////////////////////


//
// Questão 2 (1,0 ponto):
//
//
// NA PROVA DE VERDADE TERÁ UMA QUESTÃO TEÓRICO-PRÁTICA AQUI.
// RESPONDA COMO COMENTÁRIO LOGO ABAIXO, COMO INDICADO.
//
//

/*


          Digite sua resposta aqui...


                                                                  */

/////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>


//
// **PROIBIDO**  ALTERAR A DEFINIÇÃO DO TIPO DE DADOS ABAIXO:
//


typedef struct {

    char nome[31];
    char fabricante[31];
    int estoque;
    
} PRODUTO;



//
// CONTEXTO:
// Uma loja usa a estrutura acima para armazenar os dados de localização de produtos
// no estoque físico.
// Os dados são armazenados em uma matriz, onde:
//     linhas: número da estante.
//    colunas: prateleira daquela estante.
//
// Exemplo: estoque[3][4]
//          O produto está localizado na estante 3, prateleira 4.
//


/////////////////////////////////////////////////////////////////////////////


//
// Questão 3 (2,0 pontos):
//
// Crie a função criaMatriz() que receba por parâmetros o número de estantes
// e o número de prateleiras em cada estante, e retorne o endereço de memória
// de uma matriz com linhas=estantes, colunas=prateleiras, que armazene o tipo
// de dado PRODUTO. 
// A MATRIZ DEVE SER ALOCADA DINAMICAMENTE.
// Obrigatório testar se a alocação foi bem sucedida.
//


???? criaMatriz( ???? )
{





}


/////////////////////////////////////////////////////////////////////////////

//
// Questão 4 (2,0 pontos):
//
// Crie a função digitaMatriz() que receba por parâmetros o número de estantes,
// o número de prateleiras em cada estante, e o endereço de memória da matriz.
// A função não vai retornar nada.
//
// A função deve permitir digitar os dados de todos elementos da matriz.
//
// Ao FINAL DA DIGITAÇÃO, exibir os dados digitados.
// NAO PODE IR EXIBINDO ENQUANTO FOR DIGITANDO,
// PRECISA CONSULTAR A MATRIZ JÁ PREENCHIDA E EXIBIR OS DADOS !!!
//

???? digitaMatriz( ???? )
{





}


/////////////////////////////////////////////////////////////////////////////

//
// Questão 5 (2,0 pontos):
//
// Crie a função estoqueMinimo() que receba por parâmetros o número de estantes,
// o número de prateleiras em cada estante, o endereço de memória da
// matriz, e um número inteiro que representa um valor de "estoque mínimo" para cada produto.
// A função não vai retornar nada.
// Exiba os produtos que tem estoque MENOR que o estoque mínimo informado.
//

???? estoqueMinimo( ???? )
{






}


/////////////////////////////////////////////////////////////////////////////

//
// Questão 6 (1,0 ponto):
//
// Faça o programa principal.
// Pergunte ao usuário quantas estantes e quantas prateleiras ele quer na matriz.
// Chame a função da questão 3 para criar a área de armazenamento.
// Chame a função da questão 4 para digitar e exibir os dados.
// Pergunte ao usuário qual o valor do estoque mínimo.
// Chame a função da questão 5 para exibir os produtos abaixo do estoque mínimo.
// Libere as áreas de memória alocadas dinamicamente.
//
   
    
int main()
{





    
}



