#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num, aux, d1, d2, d3, d4, d5;

    printf("Digite um n�mero inteiro de 5 d�gitos: ");
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
        printf("Este n�mero � um pal�ndromo!\n");
    } else {
        printf("Este n�mero n�o � um pal�ndromo!\n");
    }

    return 0;
}
