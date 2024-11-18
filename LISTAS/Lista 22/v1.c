#include <stdio.h>
#include <stdlib.h>


int max = 0;
void leralunos();
int lernotas(int alunos[]);
int lermedia(int a);

int main(){
    leralunos();
    int alunos[max]; 
    int total_de_notas = lernotas(alunos);
    int media = lermedia(total_de_notas);
    printf("\nMedia das notas da turna = %i\n",media);
}

void leralunos(){
      do{

       printf("Quantos alunos possui a turma:\n");
        scanf("%i", &max);
    if(max < 1 || max > 100){
      printf("\n O numero de alunos deve ser entre 0 e 100.\n Tente novamente porfavor.");
    } }
      while(max < 1 || max > 100);
    
}
  


int lernotas(int alunos[]){
    int maior_nota = 0;
    int menor_nota = 100;
    int notas = 0;
    int aprovados = 0;
    int menor_aprovado = 100;
   

    for(int i = 0; i < max ; i++){
        printf("\nDigite a nota do %i.a :\n", i + 1);
        scanf("%i", &alunos[i]);

          if (alunos[i] > maior_nota && alunos[i] <=100) {
            maior_nota = alunos[i];
          }
          if (alunos[i] < menor_nota && alunos[i] >=0) {
            menor_nota=alunos[i];
          }
          if(alunos[i] >= 60){
              aprovados++;
                if(alunos[i] < menor_aprovado && menor_aprovado>=60){
                  menor_aprovado = alunos[i];
                }
          }   
            while(alunos[i] > 100 || alunos[i] < 0){
                printf("errado, novamente");
                scanf("%i", &alunos[i]);
       }
       notas+= alunos[i];
   
          
    }
    printf("\nMaior nota = %i\n", maior_nota);
    printf("\nMenor nota = %i\n", menor_nota);
    printf("\nMenor nota aprovada = %i\n", menor_aprovado);
    printf("\nForam aprovados: %i alunos\n", aprovados);
    printf("\nForam aprovados: %.2f%% da turma\n ", (float) aprovados / max * 100 );
    printf("\nForam reprovados: %.2f%% da turma\n", (float) (100 - (aprovados /(float) max * 100)));
    return notas;
}

int lermedia(int soma){
    return soma / max;
}