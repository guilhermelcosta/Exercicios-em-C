#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, peso1, peso2, peso3, soma;
    float media;

    printf("Digite o PRIMEIRO n�mero e seu respectivo peso, seguindo o exemplo. Ex.: 1, 2 > Sendo 1 o n�mero e 2 o seu peso \n");
    scanf ("%i,%i", &num1, &peso1);

    printf("Digite o SEGUNDO n�mero e seu respectivo peso, seguindo o exemplo. Ex.: 1, 2 > Sendo 1 o n�mero e 2 o seu peso \n");
    scanf ("%i,%i", &num2, &peso2);

    printf("Digite o TERCEIRO n�mero e seu respectivo peso, seguindo o exemplo. Ex.: 1, 2 > Sendo 1 o n�mero e 2 o seu peso \n");
    scanf ("%i,%i", &num3, &peso3);

    printf ("Os n�meros digitados foram: %i, %i e %i \n", num1, num2, num3);

    soma = num1*peso1 + num2*peso2 + num3*peso3;
    media = (float)soma/(peso1+peso2+peso3);

    printf("A m�dia ponderada dos n�meros digitados �: %5.2f", media);

    return 0;
}
