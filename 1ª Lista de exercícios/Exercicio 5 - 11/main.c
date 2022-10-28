#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    float valor1, valor2, valor3;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);

    if (valor1>valor2 && valor1<valor3) {
        printf("O primeiro valor(%5.2f) está entre o segundo(%5.2f) e terceiro(%5.2f) valor? \n", valor1,valor2,valor3);
        printf("1 \n");
    } else {
        printf("O primeiro valor(%5.2f) está entre o segundo(%5.2f) e terceiro(%5.2f) valor? \n", valor1,valor2,valor3);
        printf("0 \n");
    }

    return 0;
}
