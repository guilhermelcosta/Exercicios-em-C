#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int valor;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    if (valor%2==0 && valor<100) {
        printf("O valor digitado (%i) é par e menor que 100? \n", valor);
        printf("1 \n");
    } else {
        printf("O valor digitado (%i) é par e menor que 100? \n", valor);
        printf("0 \n");
    }

    if (valor%2!=0 && valor>100) {
        printf("O valor digitado (%i) é ímpar e maior que 100? \n", valor);
        printf("1 \n");
    } else if (valor%2!=0 && valor<100) {
        printf("O valor digitado (%i) é ímpar e maior que 100? \n", valor);
        printf("0 \n");
    }

    return 0;
}
