#include <stdio.h>

void Escrevainvertido(char str[], int tam); 

int main(){
    char str[] = "ROMA"; 
    int tamanho = sizeof(str) / sizeof(str[0]);  
    printf("palavra: %s\n", str);
    Escrevainvertido(str, tamanho); 
    

    return 0;
}

void Escrevainvertido(char str[], int tam){  
    printf("Inverso: ");
    for(int i = tam - 1; i >= 0 ; i--){
        printf("%c", str[i]);
    }
}