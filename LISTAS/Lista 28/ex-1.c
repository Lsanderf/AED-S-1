#include <stdio.h>
#include <string.h>

#define MAX_STR 50
int TAM = 0;
#define MAX 5

typedef struct{
    char nome[MAX_STR];
    int idade;
}Pessoa;

void EscrevaPessoas(Pessoa pessoas[]);
void CadastrarPessoas(Pessoa pessoas[]);
int main(){
    Pessoa pessoas[MAX];
    CadastrarPessoas(pessoas);
}

void CadastrarPessoas(Pessoa pessoas[]){
    for(int i = 0; i < MAX ; i++){
    printf("Porfavor digite seus dados\n");
    printf("Nome:\n ");
    fgets(pessoas[TAM].nome, MAX_STR, stdin);

    printf("Idade: \n");
    scanf("%d", pessoas[TAM].idade);
    TAM++;
}
}

void EscrevaPessoa(Pessoa pessoas[]){
    for(int i = 0 ; i < TAM ; i++){
        printf("\nNome: %s", pessoas[i].nome);
        printf("\nIdade: %d", pessoas[i].idade);
    }
}