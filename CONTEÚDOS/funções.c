


void apresentacao()
    {printf("escolha dfois valores para serem somados\n");
 }

float valorreal()
{
float X;
printf("escolha um numero: \n");
scanf("%f", &X);
return X;
}

float somareal(float x, float y)
{ 
    return x + y;
}
#include <stdio.h>
int main()
{
         apresentacao();

         float A = valorreal();
         float B = valorreal();
         somareal(A , B);





return 0;
}




