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

    if (valor1==valor2) {
        printf("O primeiro valor (%i) � igual ao segundo (%i)", valor1, valor2);
    } else if (valor1>valor2) {
        printf("O primeiro valor (%i) � maior que o segundo (%i)", valor1, valor2);
    } else {
        printf("O primeiro valor (%i) � menor que o segundo (%i)", valor1, valor2);
    }

    return 0;
}
