#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num, contador=1, num_atual=1, num_ant1=1, num_ant2=0;

    printf("Escreva um n�mero inteiro maior do que 2: ");
    scanf("%i", &num);
    printf("\nA sequ�ncia fibonacci com base no n�mero digitado seria: \n");

    while (contador<=num)
    {
        contador!=num? printf("%i, ", num_atual):printf("%i", num_atual); //Verifica��o apenas para formata��o dos n�meros. Adicionais v�rgula ',' depois de todo os n�meros, menos do �ltimo.

        num_atual=num_ant1+num_ant2;
        num_ant2=num_ant1;
        num_ant1=num_atual;
        contador++;
    }
    printf("\n");

    return 0;
}
