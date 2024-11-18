#include <stdio.h>

#define max_str  50
#define  max  100
   
   
      int tam = 0;
typedef struct 
        {
            char nome[max_str];
            int idade;
        } pessoa;

    void cadastrePessoa(pessoa pessoas[]);
    void lstaPessoas(pessoa pessoas[]);
    void escrevaPessoa(pessoa pessoas[], int i);

int main(){
    pessoa pessoas[max];
    cadastrePessoa(pessoas);
    lstaPessoas(pessoas);
}

void cadastrePessoa(pessoa pessoas[]){
    printf("\nNome:");     
    fgets(pessoas[tam].nome, max_str, stdin);

    printf("Digite a Idade: ");
    scanf("%i", &pessoas[tam].idade);
    tam++;
}

void lstaPessoas(pessoa pessoas[]){
    for(int i = 0 ; i <= tam ; i++){
        escrevaPessoa(pessoas, i);
    }
}

void escrevaPessoa(pessoa pessoas[],int i){
    printf("\nNome: %s",pessoas[i].nome);
    printf(", Idade: %i", pessoas[i].idade);
}