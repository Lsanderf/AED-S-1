#include <stdio.h>
#include <string.h>


void digiteString(char str[]);
void Escreva(int TAM, char str[]);
int tamanhoStr(char str[]);
int vogais[] = {0, 0, 0, 0, 0};
#define MAX 100

int main(){
    char str[MAX];
    digiteString(str);
    int TAM = tamanhoStr(str);
    Escreva(TAM, str);

    return 0;
}


void digiteString(char str[]){
    printf("Digite a palavra: \n");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';
}

int tamanhoStr(char str[]){
    return strlen(str);
}

void Escreva(int TAM, char str[]){
    for(int i = 0; i < TAM; i++){
         switch (str[i]){
            case 'a':
            case 'A':
            vogais[0]++;
            break;

            case 'e':
            case 'E':
            vogais[1]++;
            break;

            case 'i':
            case 'I':
            vogais[2]++;
            break;

            case 'o':
            case 'O':
            vogais[3]++;
            break;

            case 'u':
            case 'U':
            vogais[4]++;
            

         }

    }
   
    printf("A: %i.\n", vogais[0]);
    printf("E: %i.\n", vogais[1]);
    printf("I: %i.\n", vogais[2]);
    printf("O: %i.\n", vogais[3]);
    printf("U: %i.\n", vogais[4]);

}