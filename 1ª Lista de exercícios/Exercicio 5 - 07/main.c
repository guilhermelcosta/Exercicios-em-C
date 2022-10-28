#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int valor;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    if (valor>=15 && valor<=45) {
        printf("O valor digitado (%i) pertence ao intervalo fechado de [15:45]? \n", valor);
        printf("1 \n");
        printf("O valor digitado (%i) pertence ao intervalo fechado de [66:99]? \n", valor);
        printf("0 \n");
    } else if (valor>=66 && valor<=99) {
        printf("O valor digitado (%i) pertence ao intervalo fechado de [66:99]? \n", valor);
        printf("1 \n");
        printf("O valor digitado (%i) pertence ao intervalo fechado de [15:45]? \n", valor);
        printf("0 \n");
    } else {
        printf("O valor digitado (%i) NÃO pertence ao intervalo fechado de [15:45] nem [66:99]", valor);
    }

    return 0;
}
