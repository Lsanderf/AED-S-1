#include <stdio.h>

void escrever();

int main(){
    int num[] = { 7, 8, 9};
    int tamanho = sizeof(num) / sizeof(num[0]);
    escrever(num, tamanho);
}

    void escrever(int arr[], int tamanho){

        for(int i = 0 ; i < tamanho ; i++){
            printf("\nO %i.o da sequencia eh = %i", i + 1, arr[i]);
     
        }
     }
 