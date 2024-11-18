#include <stdio.h>

int ler(){
    int x;
    printf("digite a quantidade de casas da arvore:\n");
    scanf("%d", &x);
    return x;
}

void escrever(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < i ; j++){
            printf("*");
}
    printf("\n");
    }
}

int main(){
    int n =ler();
    escrever(n);
    return 0;
}

