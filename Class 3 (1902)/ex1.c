#include <stdio.h>

float media_idade(int idadeT);
float media_altura(int alturaT);
float percentagem_peso(int mais80);

int main(){
    int menor, idadeT, alturaT, mais80, mediaI;
    float mediaA, percentoP;

    for (int j = 0; j < 50; j++){
        printf("-");
    }
    printf("\n");

    for(int i = 1; i <= 11; i++){
        int idade, altura, peso;
        printf("Idade do jogador %d: ", i);
        scanf("%d%*c", &idade);
        idadeT += idade;
        printf("Altura do jogador %d em cm: ", i);
        scanf("%d%*c", &altura);
        alturaT += altura;
        printf("Peso do jogador %d em kg: ", i);
        scanf("%d%*c", &peso);
        
        if(idade < 18){
            menor++;
        }
        if(peso > 80){
            mais80++;
        }
        
        for (int j = 0; j < 50; j++){
            printf("-");
        }
        printf("\n");
    }

    mediaI = media_idade(idadeT);
    mediaA = media_altura(alturaT);
    percentoP = percentagem_peso(mais80);
    
    for (int j = 0; j < 50; j++){
        printf("-");
    }
    printf("\n");

    printf("Quantidade de jogadores menores de idade: %d\n", menor);
    printf("Media de idades de todo time: %d\n", mediaI);
    printf("Media de altura de todo time: %.2f\n", mediaA);
    printf("Porcentagem de jogares acima de 80 quilos: %.0f%%\n", percentoP);

    for (int j = 0; j < 50; j++){
        printf("-");
    }
    printf("\n");

    return 0;
}

float media_idade(int idadeT){
    return idadeT / 11;
}

float media_altura(int alturaT){
    return alturaT / 11;
}

float percentagem_peso(int mais80){
    float percentagem;
    percentagem = ((float)mais80 / 11) * 100.0;
    return percentagem;
}