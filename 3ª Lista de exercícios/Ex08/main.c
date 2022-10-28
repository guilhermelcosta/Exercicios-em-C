#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int dir, esq, num=1000, soma, pot, contador=0;

    printf("Os números que possuem a mesma característica do 3025 > 30+25 = 55 > 55² = 3025, são: \n");

    while (num<=9999)
    {
        esq=num%100;
        dir=num/100;
        soma=dir+esq;
        pot=ceil(pow(soma,2)); //Necessário 'ceil' por conta do arredondamento das casas decimais.

        if (pot==num)
        {
            contador++;
            printf("\n%i - %i\n", contador, num);
        }
        num++;
    }

    return 0;
}
