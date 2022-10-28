#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num, fat, aux;

    printf("Digite um n�mero inteiro positivo para calcular seu fatorial: ");
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
        printf("\nO fatorial do n�mero digitado �: %i\n", fat);
    }
    else
    {
        printf("\nN�o existe fatorial para n�meros negativos.\n");
    }

    return 0;
}
