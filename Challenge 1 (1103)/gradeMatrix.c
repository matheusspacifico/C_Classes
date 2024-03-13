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
    int disciplinas;
    while(1){
        printf("Qtnd de disciplinas: ");
        scanf("%d%*c", &disciplinas);
        if(disciplinas > 0){
            break;
        }else{
            printf("Quantidade invalida. Tente novamente.\n");
        }
    }
    float notas[alunos][disciplinas];
    printf("\n");
    for(int i = 0; i < alunos; i++){
        for(int j = 0; j < disciplinas; j++){
            printf("Digite a nota do aluno %d na disciplina %d: ", i+1, j+1);
            scanf("%f%*c", &notas[i][j]);
        }
        printf("\n");
    }

    printf("Medias das notas de cada aluno:\n");
    for(int i = 0; i < alunos; i++){
        float soma = 0;
        for(int j = 0; j < disciplinas; j++){
            soma += notas[i][j];
        }
        float media = soma / disciplinas;
        printf("Aluno %d: %.2f\n", i+1, media);
    }

    printf("\nMedias das notas de cada disciplina:\n");
    for(int j = 0; j < disciplinas; j++){
        float soma = 0;
        for(int i = 0; i < alunos; i++){
            soma += notas[i][j];
        }
        float media = soma / alunos;
        printf("Disciplina %d: %.2f\n", j+1, media);
    }

    return 0;
}
