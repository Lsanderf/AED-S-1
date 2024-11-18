#include <stdio.h>
#include <stdlib.h>

int main(){
    int *num1 = (int*) malloc(sizeof(int));
    int *num2 = (int*) malloc(sizeof(int));
    int *soma = (int*) malloc(sizeof(int));

    printf("digite o primeiro termo:\n");
    scanf("%i", num1);

    printf("digite o segundo termo:\n");
    scanf("%i", num2);
    
    *soma = *num1 + *num2;
    printf("o resultado eh: %i", *soma);

    

    return 0;

}
