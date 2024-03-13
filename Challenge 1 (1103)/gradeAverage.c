#include <stdio.h>

int main(int argc, char const *argv[]){
    int alunos;
    while(1){
        printf("Qtnd de alunos: ");
        scanf("%d%*c", &alunos);
        if(alunos > 0){
            break;
        }else{
            printf("Quantidade invalida. Tente novamente.\n");
        }
    }

    float notas[alunos];
    for(int i = 0; i < alunos; i++){
        printf("Digite a nota do estudante %d: ", i+1);
        scanf("%f%*c", &notas[i]);
    }

    printf("As notas digitadas sao: [ ");
    for(int i = 0; i < alunos; i++){
        printf("%.1f", notas[i]);
        if(i != alunos-1){
            printf(", ");
        }
    }
    printf(" ]\n");

    float soma;
    float media;
    for(int i = 0; i < alunos; i++){
        soma += notas[i];
    }
    media = soma / alunos;
    printf("A media das notas eh: %.2f", media);

    return 0;
}