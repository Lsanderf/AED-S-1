#include <stdio.h>

int ler(){
    int x;
    printf("digite o valor:\n");
    scanf("%d", &x);
    return x;
}

void inversao(int n){
    for(int i = n; i > 0 ; i = i/10){
        printf("%d", i % 10);
    }
}

int main(){
  int n =ler();
    inversao(n);
    return 0;
}