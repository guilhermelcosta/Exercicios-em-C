#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%i", &a);
    printf("Digite o valor de B: ");
    scanf("%i", &b);

    c=a;
    a=b;
    b=c;

    printf("Trocando os valores, o valor de A seria %i e de B seria %i \n", a, b);

    return 0;
}
