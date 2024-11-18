#include <stdio.h>

#define TAM 10
void EscrevamMaior(int Array);


int main(){
   int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
}

void EscrevaMaior(int Array[]){
    int maior = 0;
    int aux;
    for(int i = TAM ; i > 0 ; i--){
        if (Array[i] > maior){
            maior = Array[i];
            int aux = Array[i + 1];
            Array[i] = Array[i];
        }
    }
}