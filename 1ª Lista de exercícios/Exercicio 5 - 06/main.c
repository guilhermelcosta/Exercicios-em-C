#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int valor;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    if (valor>=25 && valor<=75) {
        printf("O valor digitado (%i) pertence ao intervalo fechado de [25:75]? \n", valor);
        printf("1 \n");
    } else {
        printf("O valor digitado (%i) pertence ao intervalo fechado de [25:75]? \n", valor);
        printf("0 \n");
    }

    return 0;
}
