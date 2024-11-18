#include <stdio.h>

int ler()
{
int n;
    scanf("%d", &n);                                                                                        
    return n;
}

int fatorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }
    else
    {
        return n * fatorial(n-1);
    }
    
}


 void fim(int resultado)
    {
        printf("%d", resultado);
    }



    int main()
    {
        int n = ler();
        int resultado = fatorial(n);
        fim(resultado);
        return 0;
    }