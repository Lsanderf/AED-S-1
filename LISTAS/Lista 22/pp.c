#include <stdio.h>
#include <stdbool.h>

int main(){
    int A, B;
   do{

    printf("\nDigite o 1.o: \n");
    scanf("%i", &A);
    printf("Digite o 2.o: \n");
    scanf("%i", &B);
     if(A != 0 && B != 0){
        bool resposta = ehprimo(A, B);}
    }
    else{
        printf("digite um numero valido\n");
    }
    while(A == 0 || B == 0);
    }


bool ehoprimo(int A, int B){
    int i = 2;
    int menor = menor_valor(A,B);
    bool primos = false; 
    do{
        if(A/2 % i == 0 && B/2 % i == 0){
            primos = true;
        }       
        i++;
    }
   
    while(A/2 % i != 0 && B/2 % i != 0 || i == menor/2);

return primos;
    }

    int menor_valor(int A, int B){
        int x;
        if(A < B){
            x = A;
        }
        else{
            x = B;
        }
    }