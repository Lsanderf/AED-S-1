#include <stdio.h>

void intro(){
    printf("vamos calcular");
}

float ler(){
    float s;
    printf("salario:\n");
    scanf("%f", &s);
    return s;
}

float faturamento(){
    float c;
    printf("faturamento:\n");
    scanf("%f", &c);

    float lucro = c * 4 /100;
    return lucro;
    }

    int main(){
        intro();
        float salario = ler();
        float comissao =faturamento();

        float resultado = salario + comissao;

        printf("comissao: R$%2.f + salario : R$%2.f = R$%2.F", comissao, salario , resultado);
        return 0;
    }