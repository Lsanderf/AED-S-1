#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x = malloc(sizeof(int));
    int *y = malloc(sizeof(int));
    int *s = malloc(sizeof(int));
    printf("digite o 1:");
    scanf("%i", x);
    printf("digite o 2:", y);
    scanf("%i", y);
    *s = *x + * y;
    printf("soma = %i", *s);
    return 0;
}