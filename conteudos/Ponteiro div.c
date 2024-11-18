#include <stdio.h>
#include <stdlib.h>


int* ler(int X){

    int *C = (int*) malloc(sizeof(int));
    if(X == 0){
        printf("\nDigite o primeiro:\n"); 
    }
    else{
        printf("Digite o segundo:\n");  
    }
    scanf("%i", C);
    return C;
}

void print(int *A, int *B){

    int *D = (int*) malloc(sizeof(int));
    *D = *A / *B;
    printf("\nresultado = %i", *D);
    free(D);
}




int main(){
    int *A = ler(0);
    int *B = ler(1);
    print(A, B);
    return 0;
        
   
    return 0;
     free(A);
    free(B);
}
