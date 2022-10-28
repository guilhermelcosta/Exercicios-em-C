#include <stdlib.h>
#include <stdio.h>

int ePrimo(int);

int main()
{

    char linha[100];
    int num;

    FILE *sequencia_fibonacci, *sequencia_fibonacci_PRIMOS;

    sequencia_fibonacci = fopen("sequencia_fibonacci.txt", "r");
    sequencia_fibonacci_PRIMOS = fopen("sequencia_fibonacci_PRIMOS.txt", "a");

    if (sequencia_fibonacci == NULL)
    {
        printf("Nao foi possivel ler o arquivo!");
    }
    else
    {
        while (!feof(sequencia_fibonacci))
        {
            fgets(linha, 100, sequencia_fibonacci);
            num = atoi(linha);

            if (ePrimo(num) == 1)
            {
                printf("%i salvo\n", num);
                fprintf(sequencia_fibonacci_PRIMOS, "%i\n", num);
            }
        }
    }

    printf("\nArquivo salvo com sucesso!\n");

    return 0;
}

int ePrimo(num)
{
    int primo;

    if (num > 1)
        primo = 1;
    else
        primo = 0;

    for (int i = 2; i < num; i++)
    {
        if ((num % i) == 0)
            primo = 0;
    }

    return primo;
}