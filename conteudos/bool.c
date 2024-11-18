#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isEven;
    int number;

    printf("Digite um numero: ");
    scanf("%d", &number);

    // Verifica se o número é par
    isEven = (number % 2 == 0);

    if (isEven) {
        printf("%d eh um numero par.\n", number);
    } else {
        printf("%d eh um numero ímpar.\n", number);
    }

    return 0;
}