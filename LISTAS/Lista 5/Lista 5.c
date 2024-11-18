#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
int verificarano(){


        int ano;
        printf("digite o ano:\n");
        scanf("%d", &ano);    
        return ano;
}

bool ehbissexto(int ano){
      
           return ((ano % 4 == 0 && ano % 100 != 0 ) || ( ano % 400 == 0));
}


char tentardenovo()
{   char x;
    printf("quer tentar denovo: S | N \n");
    scanf(" %c", &x);
    
    x = toupper(x);

    while (x != 'S' && x != 'N' )
    {
        printf("inválido");
        scanf("%c", &x);

      x = toupper(x);

      
    }
 return x;
}



    int main()
    {   
        bool continuar = true;
        while(continuar) {
            int ano = verificarano();
           
            if  (ehbissexto(ano))
            {
                printf("%d eh bissexto\n", ano);
            }
            else 
            {
                printf("%d nao eh bissexto\n", ano);
            }

            char resposta = tentardenovo();
            if (resposta == 'N') {
                printf("Obrigado!\n");
          continuar = false;  }}
return 0;}




