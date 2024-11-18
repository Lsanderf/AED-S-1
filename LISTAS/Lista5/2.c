#include <stdio.h>

int conta(){
    int termo1 = 10;
    int termo2 = 100;

    for(int i = 1 ; i <=10 ; i++ ){
    if (i % 2 == 0){
        printf("%d/%d, ", termo2, termo1);
    }
    else if(i % 2 != 0){
        printf("%d/%d, ", termo1, termo2);
    }
    
    termo1++;
    termo2--;
    }
}

int main(){
    conta();

    return 0;
}