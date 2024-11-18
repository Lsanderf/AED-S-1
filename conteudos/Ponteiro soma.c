#include <stdio.h>
#include <stdlib.h>

int main(){
    int *num1 = (int*) malloc(sizeof(int));
    int *num2 = (int*) malloc(sizeof(int));
    int *soma = (int*) malloc(sizeof(int));

    printf("primeiro:\n");
    scanf("%d", num1);

    printf("segundo:\n");
    scanf("%i", num2);
    *soma = *num1 + *num2;

    printf("%i + %i = %i", *num1, *num2, *soma);

    printf("\nTREINE MAIS");

    return 0;
}