#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char um_ponto[] = "AEIOULNSTR";
    char dois_ponto[] = "DG";
    char tres_ponto[] = "BCMP";
    char quatro_ponto[] = "FHVWY";
    char cinto_ponto[] = "K";
    char oito_ponto[] = "JX";
    char dez_ponto[] = "QZ";
    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char input[20];
    int flag;
    int pontuacao;
    int parar = 0;
    printf("====================================\n");
    while(parar < 1){
        pontuacao = 0;
        printf("Digite uma palavra em maiuscula.\n");
        printf("Ou digite 'FIM' para sair: ");
        gets(input);
        // detecta se deseja encerrar
        if(strcmp(input, "FIM") == 0){
            parar++;
            break;
        }       
        // detecta se todos os caracteres sao validos
        for(int i = 0; input[i] != '\0'; i++){
            flag = 0;
            for(int j = 0; alfabeto[j] != '\0'; j++){
                if(input[i] == alfabeto[j]){
                    flag = 1;
                    break;
                }
            }
            if(!flag){
                printf("O caractere '%c' nao e valido.\n", input[i]);
                printf("Tente novamente.\n");
                printf("====================================\n");
                break;
            }
        }
        if(!flag){
            continue;
        }
        // pontos
        for(int i = 0; input[i] != '\0'; i++){
            for(int j = 0; um_ponto[j] != '\0'; j++){
                if(input[i] == um_ponto[j]){
                    pontuacao++;
                }
            }
            for(int j = 0; dois_ponto[j] != '\0'; j++){
                if(input[i] == dois_ponto[j]){
                    pontuacao += 2;
                }
            }
            for(int j = 0; tres_ponto[j] != '\0'; j++){
                if(input[i] == tres_ponto[j]){
                    pontuacao += 3;
                }
            }
            for(int j = 0; quatro_ponto[j] != '\0'; j++){
                if(input[i] == quatro_ponto[j]){
                    pontuacao += 4;
                }
            }
            for(int j = 0; cinto_ponto[j] != '\0'; j++){
                if(input[i] == cinto_ponto[j]){
                    pontuacao += 5;
                }
            }
            for(int j = 0; oito_ponto[j] != '\0'; j++){
                if(input[i] == oito_ponto[j]){
                    pontuacao += 8;
                }
            }
            for(int j = 0; dez_ponto[j] != '\0'; j++){
                if(input[i] == dez_ponto[j]){
                    pontuacao += 10;
                }
            }    
        }
        printf("Pontuacao total da palavra: %d\n", pontuacao);
        printf("====================================\n");
    }
    printf("====================================\n");
    return 0;
}