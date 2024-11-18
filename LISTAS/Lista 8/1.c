#include <stdio.h>
#include <ctype.h>

int ler(){
    int x;
    printf("digite um numero:\n");
    scanf("%d", &x);
    return x;
    }

void conta(int n){
    if ( n % 2 == 0){
        printf("par\n");
        }
        else{
            printf("impar\n");
        }
    
}

char again(){
    char x;
    printf("denovo? S | N\n");
    scanf(" %c", &x);
    x = toupper(x);
    
    while (x != 'S' && x != 'N'){
        printf("invalido\n");
        scanf(" %c", &x);
        x = toupper(x);}
    

    return x;
}

int main(){
     char x;
    do{
     int n= ler();
    conta(n);
     x = again();
    }
    

    while(x != 'N');
    printf("obrigado\n");
    
    return 0;
}