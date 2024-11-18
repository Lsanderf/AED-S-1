#include <stdio.h>

#define max 10
void LerReal(int reais[], int nivel);
void Escreva(int reais[], int nivel);
void EscrevaInvertido(int reais[], int MAX);

int main(){
   printf("\nOla seja bem vindo!\n");
    int reais[max];
    LerReal(reais, 0);
   
    printf("Sequencia = {");
    Escreva(reais, 0);
    printf("}\n");
   
    printf("Sequencia invertida = {");
    EscrevaInvertido(reais, max);
     printf("}\n");

    return 0;
}

void LerReal(int reais[], int nivel){
    if (nivel < max){
            printf("Digite o %i.o numero: \n", nivel + 1);
            scanf("%i", &reais[nivel]);
            LerReal(reais, nivel + 1);
        }
   
}

void Escreva(int reais[], int nivel){
    if(nivel < 10){
        printf("%i", reais[nivel]);
        if (nivel < max - 1) {
            printf(", ");
        }
        Escreva(reais, nivel + 1);
    }
}

void EscrevaInvertido(int reais[], int MAX){
     if (MAX > 0) {
        printf("%i", reais[MAX -1]);
        if (MAX > 0) {
            printf(", ");
        }
        EscrevaInvertido(reais, MAX - 1);
     }
}