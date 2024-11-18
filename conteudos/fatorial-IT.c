#include <stdio.h>
int ler()
{
    int x;
    printf("digite um numero:\n");
    scanf("%d", &x);
    return x;
}

int fatorial(int n)
{
    int resultado = 1;

if( n == 0 || n ==1 )
{
    return 1;
}
    else if (n < 0 )
    {
        return -1;
    }
    else 
    {
    for(int i = n ; i > 1 ; i--)
    {
        resultado *= i;
        printf("%d ", resultado);
    }
    }

    return resultado;
}


    void apresentacao(int resultado)
{

    printf("fim");
}

int main()
{
    int n = ler();
    int resultado = fatorial(n);
    apresentacao(resultado);
    return 0;
}