#include <stdio.h>

int main(){
    int notasde50, i, total, j;
    char confirmar;

    notasde50 = 0;
    i = 0;
    total = 0;
    confirmar = 'n';

    for (j = 0; j < 50; j++){
        printf("-");
    }
    printf("\n");
    
    printf("Bem vindo ao contador de notas de 50.\n");
    printf("Vamos contar de uma em uma.\n");
    printf("Pressione [y] se voce tem uma nota de cinquenta, ou [n] caso nao tenha: ");
    scanf("%c%*c", &confirmar);

    for (j = 0; j < 50; j++){
        printf("-");
    }
    printf("\n");

    if (confirmar == 'y'){
        notasde50++;
        while (i < 1){
            confirmar = 'n';
            printf("Se voce ainda tem mais uma nota de cinquenta, digite [y] ou [n] caso nao tenha: ");
            scanf("%c%*c", &confirmar);
            if (confirmar == 'y'){
                notasde50++;
            }
            else{
                i++;
            }
        }

        for (j = 0; j < 50; j++){
            printf("-");
        }
        printf("\n");

        total = 50 * notasde50;
        if (notasde50 == 1){
            printf("Notas de cinquenta: %d; Total: %d.\n", notasde50, total);
            printf("Voce so tem UMA nota de cinquenta... Paia.\n");
            printf("Fim do programa.\n");
        } else if(notasde50 > 1 && notasde50 < 6){
            printf("Notas de cinquenta: %d; Total: %d.\n", notasde50, total);
            printf("Podia ter mais.\n");
            printf("Fim do programa.\n");
        } else if(notasde50 > 5 && notasde50 < 11){
            printf("Notas de cinquenta: %d; Total: %d.\n", notasde50, total);
            printf("Receba.\n");
            printf("Fim do programa.\n");
        } else if (notasde50 > 10 && notasde50 < 21){
            printf("Notas de cinquenta: %d; Total: %d.\n", notasde50, total);
            printf("Me da algumas ai kkkkkkkkkkkk\n");
            printf("Fim do programa.\n");
        } else if (notasde50 > 20){
            printf("Notas de cinquenta: %d; Total: %d.\n", notasde50, total);
            printf("Tapoha es o silvio santos kkkkkkkkkkkkkkkkkkkkkkk\n");
            printf("Olha o aviaozinho kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk\n");
            printf("Fim do programa.\n");
        }
    }
    else{
        printf("Poh, voce nao tem uma nota de cinquenta? :(\n");
        printf("Fim do programa.\n");
    }
    
    for (j = 0; j < 50; j++){
        printf("-");
    }
    printf("\n");

    return 0;
}