#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int base, altura, area;

    printf("Digite a base(b) do tri�ngulo em metros: ");
    scanf("%i", &base);
    printf("Digite a altura(h) do tri�ngulo em metros: ");
    scanf("%i", &altura);

    area = (base*altura)/2;

    printf("A �rea do tri�ngulo � de %i m�", area);

    return 0;
}
