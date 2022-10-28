#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num, fat, aux;

    printf("Digite um número inteiro positivo para calcular seu fatorial: ");
    scanf("%i", &num);

    aux=num;
    fat=1;

    while (aux>=1)
    {
        fat=fat*aux;
        aux--;
    }

    if (num>0)
    {
        printf("\nO fatorial do número digitado é: %i\n", fat);
    }
    else
    {
        printf("\nNão existe fatorial para números negativos.\n");
    }

    return 0;
}
