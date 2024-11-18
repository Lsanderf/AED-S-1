#include <stdio.h>
int ler(){
    int x;
   do{
    printf("numero de termos:\n");
    scanf("%d", &x);
    if(x <=0){
        printf("invalido, digite denovo\n");
    }
    }
    while(x <= 0);
    
      
    return x;

}

void conta(int A, int H){

   for(int i = 1 ; i <=H ; i*=3){
    printf("%d/%d, ",A, i);
   }
 
 }   

 int main(){
    int H = ler();
    conta(1, H);
    return 0;
 }