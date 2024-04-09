#include <stdio.h>

int main(){
    int i, *ptr, mat[] = {4, 5, 6};
    ptr = mat;
    for (i=0; i<3 ;i++)
    {
    printf("%d ", *ptr);
    ptr++;
    }
}