#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num, contador=1, num_atual=1, num_ant1=1, num_ant2=0;

    printf("Escreva um número inteiro maior do que 2: ");
    scanf("%i", &num);
    printf("\nA sequência fibonacci com base no número digitado seria: \n");

    while (contador<=num)
    {
        contador!=num? printf("%i, ", num_atual):printf("%i", num_atual); //Verificação apenas para formatação dos números. Adicionais vírgula ',' depois de todo os números, menos do último.

        num_atual=num_ant1+num_ant2;
        num_ant2=num_ant1;
        num_ant1=num_atual;
        contador++;
    }
    printf("\n");

    return 0;
}
