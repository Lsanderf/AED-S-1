#include <stdio.h>
#include <stdlib.h>
int main(){
    int *A = (int*) malloc(sizeof(int));
    int *B = (int*) malloc(sizeof(int));
    int *M = (int*) malloc(sizeof(int));

    printf("Vamos multiplicar, digite o primeiro:\n");
    scanf("%i", A);

    printf("Segundo:\n");
    scanf("%i", B);
    *M = *A * *B;
    
    printf("resultado: %i", *M);
    }