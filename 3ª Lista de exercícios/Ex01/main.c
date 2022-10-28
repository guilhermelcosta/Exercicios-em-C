#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num, qPar=0, qImpar=0;

    printf("Digite um número inteiro (insira '999' para terminar o programa): ");
    scanf("%i", &num);

    while (num!=999)
    {
        if (num%2==0)
        {
            qPar++;
        }
        else
        {
            qImpar++;
        }

        printf("Digite um número (insira '999' para terminar o programa): ");
        scanf("%i", &num);
    }

    printf("\nA quantidade de números pares digitados foi: %i\n", qPar);
    printf("\nA quantidade de números ímpares digitados foi: %i\n", qImpar);

    return 0;
}
