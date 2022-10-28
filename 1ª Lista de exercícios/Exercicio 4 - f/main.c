#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int base, altura, area;

    printf("Digite a base(b) do triângulo em metros: ");
    scanf("%i", &base);
    printf("Digite a altura(h) do triângulo em metros: ");
    scanf("%i", &altura);

    area = (base*altura)/2;

    printf("A área do triângulo é de %i m²", area);

    return 0;
}
