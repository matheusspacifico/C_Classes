#include <stdio.h>

int main(){
    int i = 1;
    int j;

    for (int k = 0; k < 50; k++){
        printf("-");
    }
    printf("\n");

    while(i < 11){
        j = 1;
        while(j < 11){
            printf("%d * %d = %d\n", i, j, i*j);
            j++;
        }
        i++;
        for (int k = 0; k < 50; k++){
            printf("-");
        }
        printf("\n");
    }
}