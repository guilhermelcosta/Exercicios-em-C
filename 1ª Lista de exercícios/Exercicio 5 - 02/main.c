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
        printf("1");
    }

    if (valor%2==0) {
        printf("0");
    }


    return 0;
}
