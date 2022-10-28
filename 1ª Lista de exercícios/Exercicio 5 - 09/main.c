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

    if (valor1%2==0 && valor1>0) {
        printf("O primeiro valor digitado (%i) é par e positivo? \n", valor1);
        printf ("1 \n");
    } else {
        printf("O primeiro valor digitado (%i) é par e positivo? \n", valor1);
        printf("0 \n");
    }

    if (valor2%2!=0 && valor2<0) {
        printf("O segundo valor digitado (%i) é ímpar e negativo? \n", valor2);
        printf ("1 \n");
    } else {
        printf("O segundo valor digitado (%i) é ímpar e negativo? \n", valor2);
        printf("0 \n");
    }

    return 0;
}
