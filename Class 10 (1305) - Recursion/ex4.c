#include <stdio.h>
#include <string.h>

void inverter_recursiva(char *string, int primeiro, int ultimo){
    if (primeiro >= ultimo)
    {
        return;
    }
    
    char aux = string[primeiro];
    string[primeiro] = string[ultimo];
    string[ultimo] = aux;

    return inverter_recursiva(string, primeiro + 1, ultimo - 1);
}

int main(int argc, char const *argv[])
{
    char string[20];
    gets(string);
    int size = strlen(string);
    inverter_recursiva(string, 0, size - 1);
    printf("%s\n", string);    
    return 0;
}
