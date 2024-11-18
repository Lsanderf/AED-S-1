#include <stdio.h>
#include <string.h>

void EscrevaInvertido(char str[], int tam); 

int main(){
    char str[] = "ROMA";
    int tam = strlen(str);
    EscrevaInvertido(str, tam);
    
    return 0;
}

void EscrevaInvertido(char str[], int tam){
    if(tam > 0){
        printf("%c", str[tam - 1]);
        EscrevaInvertido(str, tam -1);
    }
}    