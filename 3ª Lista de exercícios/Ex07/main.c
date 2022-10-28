#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int car1, car2, car3, car4, car5, aux, num=10000, contador=0;

    printf("Os números palíndromos de 10.000 a 99.999, são (se prepare, lista EXTENSA): \n"); //CONCLUIR

    while (num<=99999) //Repetição criada para separar cada uma das casas decimais dos números.
    {
        car5=num%10;
        aux=num/10;
        car4=aux%10;
        aux=aux/10;
        car3=aux%10;
        aux=aux/10;
        car2=aux%10;
        aux=aux/10;
        car1=aux%10;
        aux=aux/10;

        if (car1==car5 && car2==car4)
        {
            contador++;
            printf("%i - ", contador);
            printf("%i", car1);
            printf("%i", car2);
            printf("%i", car3);
            printf("%i", car4);
            printf("%i", car5);
            printf("\n");
        }

        num++;
    }

    return 0;
}
