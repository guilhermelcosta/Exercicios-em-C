#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int n, dividendo, divisor, contador=1;
    float soma=0;

    printf("Digite um número inteiro: ");
    scanf("%i", &n);

    dividendo=1;
    divisor=n;

    while (divisor>=1)
    {
        if (contador%2!=0)
        {
            soma=soma+((float)dividendo/divisor); //Adicionei (float) para poder utilizar 'soma' como real.
            dividendo++;
            divisor--;
        }
        else
        {
            soma=soma-((float)dividendo/divisor); //Adicionei (float) para poder utilizar 'soma' como real.
            dividendo++;
            divisor--;
        }
        contador++;
    }
    printf("\nO valor de S, calculado com base no número digitado, é de: %.2f\n", soma);
    printf("\nS = +1/N - 2/(N-1) + 3/(N-2) - 4/(N-3)...\n");

    return 0;
}
