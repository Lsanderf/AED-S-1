#include <stdio.h>

int ler(){
    int x;
    printf("digiet:\n");
    scanf("%d", &x);
    return x;
}
void conta(int n){
    int resultado =0;
    for(int i = n/2 ; i >= 1 ; i--)
    if (n % i == 0){
    printf("%d, ", i);
    resultado++;
}
    printf("total : %d", resultado);
}

int main(){
    int n = ler();
    conta(n);
    }