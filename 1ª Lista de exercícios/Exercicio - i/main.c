#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, num_positivo;
    float resto, aux;

    printf("Digite um n�mero inteiro: ");
    scanf("%i", &num);

    if (num>=0)
    {
        resto = num%7;
    }
    else
    {
        num_positivo=num*(-1);
        aux = num_positivo/7.0;
        aux = ceil(aux);
        resto = num+(7*aux);
    }

    printf("O resto da divis�o do n�mero digitado por 7 � %5.2f", resto);

    return 0;
}
