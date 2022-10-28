#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int valor;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    printf("O valor digitado (%i) é ímpar? \n", valor);

    if (valor%2!=0) {
        printf("1 \n");
    }

    if (valor%2==0) {
        printf("0 \n");
    }

    printf("O valor digitado (%i) é maior do que 100? \n", valor);

    if (valor>100) {
        printf("1");
    }

    if (valor<=100) {
        printf("0");
    }

    return 0;
}
