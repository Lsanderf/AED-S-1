
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int ler(){
    int x;
    printf("digite um numero:\n");
    scanf("%d", &x);
    return x;
}

void invertido(int n){

    printf("%d", n % 10);
    if (n >= 10){
     invertido(n/10);}
}

char opcao(){
    char x;
    do {
    printf("\nQuer tentar denovo: S ou N \n");
    scanf(" %c", &x);
   x =  toupper(x);
    if (x !='S' && x != 'N')
    {
        printf("resposta invalida");
    }
    }while (x != 'S' && x != 'N');
    return x;
}

int main(){
    char x;
    do{
    int n = ler();
    invertido(n);
    x = opcao();
    } while (x == 'S');
    printf("obrigado!");
    return 0;
}
