#include <stdio.h>
#define max 10
int lernumero(int x[]);
void escreva(int x[]);
void escrevaInverso(int x[]);


int main(){
    int x[max];
    lernumero(x);
    return 0;
}


int lernumero(int x[]){
    for(int i = 0 ; i < max ; i++){
        printf("digite o %i.o numero: \n", i + 1);
        scanf("%i", &x[i]);
    }
    escreva(x);
}

    void escreva(int x[]){
        printf("\nArray = {");
        for(int i = 0; i < max; i++){
            printf("%i, ", x[i]);
        }
       printf("}\n");
        escrevaInverso(x);
    }

    void escrevaInverso(int x[]){
        printf("\nArray invertido = {");
        for(int i = max - 1; i > 0; i--){
            printf("%i, ", x[i]);
        }
    printf("}\nObrigado!");
    }
 