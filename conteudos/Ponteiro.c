#include <stdio.h>
int main(){
    int A = 7;
    int *p;
    p = &A;
    printf("endereço de A = %p\n", &A);
    printf("a posicao de p = %p\n", *p );
    printf("o ponteiro aponta para %p\n", p);
    printf("O valor de A = %d\n", A);
    printf("e em p esta o valor %i", *p);
}