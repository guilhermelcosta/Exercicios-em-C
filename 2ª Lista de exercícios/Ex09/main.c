#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num, aux, d1, d2, d3, d4, d5;

    printf("Digite um número inteiro de 5 dígitos: ");
    scanf("%i", &num);


    d1=num%10;
    aux=num/10;
    d2=aux%10;
    aux=aux/10;
    d3=aux%10;
    aux=aux/10;
    d4=aux%10;
    aux=aux/10;
    d5=aux%10;

    if (d1==d5 && d2==d4) {
        printf("Este número é um palíndromo!\n");
    } else {
        printf("Este número não é um palíndromo!\n");
    }

    return 0;
}
