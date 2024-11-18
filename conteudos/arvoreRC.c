#include <stdio.h>

int ler(){
    int x;
    printf("digite o numero de linhas:\n");
    scanf("%d", &x);
    return x;
}

void desenho(int n , int nivel){
    if(nivel > n){
    return;}
    for(int i = 1 ; i <= nivel ; i++){
        printf("*");
    }
        printf("\n");
        desenho(n , nivel +1);
}

int main(){
    int n = ler();
    desenho(n, 1);
    return 0;

}