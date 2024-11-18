#include <stdio.h>

void apresentacao()
{
printf("vamos fazer uma sequencia de 1 ate o numero que voce escolher, digite:\n");
}

int digite()
{
    int x;
    scanf("%d", &x);
    return x;
}


void resultado(int x)
{
        for(int i = 0 ; i < x ; i++)
            printf("%d\n", i + 1);
}

int main()
{
    apresentacao();
    int numero = digite();
    resultado(numero);
return 0;
}