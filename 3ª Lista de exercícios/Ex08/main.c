#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int dir, esq, num=1000, soma, pot, contador=0;

    printf("Os n�meros que possuem a mesma caracter�stica do 3025 > 30+25 = 55 > 55� = 3025, s�o: \n");

    while (num<=9999)
    {
        esq=num%100;
        dir=num/100;
        soma=dir+esq;
        pot=ceil(pow(soma,2)); //Necess�rio 'ceil' por conta do arredondamento das casas decimais.

        if (pot==num)
        {
            contador++;
            printf("\n%i - %i\n", contador, num);
        }
        num++;
    }

    return 0;
}
