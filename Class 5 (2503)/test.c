#include <stdio.h>
#include <string.h>

int main(){
    typedef struct{
        int camisa;
        char pedreiro[7];
    } luva;

    luva p1;

    p1.camisa = 10;
    strcpy(p1.pedreiro, "receba");

    printf("%d\n", p1.camisa);
    printf("%s\n", p1.pedreiro);

    return 0;
}