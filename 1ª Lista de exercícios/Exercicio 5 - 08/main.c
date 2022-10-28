#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%i", &valor2);

    if (valor1%2==0 && valor2%2!=0) {
        printf("O primeiro valor é par e o segundo é ímpar? \n");
        printf("1 \n");
    } else {
        printf("O primeiro valor é par e o segundo é ímpar? \n");
        printf("0 \n");
    }

    return 0;
}
