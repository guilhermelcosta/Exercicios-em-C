#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    float num, lim_inf=1, lim_sup=1023, contador=0; //Utilizei float por conta do arredondamento dos valores na hora de calcular o limite inferior e superior.
    char resp;                                     //Sem isso, n�o � poss�vel chegar no valor de 1023.

    printf("Ol�, eu sou o computador advinhador 3.000.\n");
    printf("Voc� vai PENSAR em um n�mero entre 1 e 1023 e, em menos de 10 tentativas, eu vou acertar ele.\n");

    num=round((lim_inf+lim_sup)/2);

    while (contador<10)
    {
        printf("\nPensou?, agora me diz, esse n�mero � maior ('>'), menor ('<') ou igual ('=') a %.f? ", num);
        fflush(stdin);
        scanf ("%c", &resp);

        if (resp=='>')
        {
            lim_inf=num;
            num=round((lim_sup-lim_inf)/2)+lim_inf;
        }
        else
        {
            if (resp=='<')
            {
                lim_sup=num;
                num=round((lim_sup-lim_inf)/2)+lim_inf;
            }
            else
            {
                printf("\nAcertei!!!\n");
                break;
            }
        }
        contador++;
    }

    return 0;
}
