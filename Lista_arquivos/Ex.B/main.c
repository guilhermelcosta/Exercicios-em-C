#include <stdlib.h>
#include <stdio.h>

int main()
{

    char linha[100];
    int num;

    FILE *sequencia_fibonacci, *sequencia_fibonacci_PAR, *sequencia_fibonacci_IMPAR;

    if ((sequencia_fibonacci = fopen("sequencia_fibonacci.txt", "r")) == NULL)
    {
        printf("Nao foi possivel ler o arquivo!");
    }
    else
    {
        while (!feof(sequencia_fibonacci))
        {
            fgets(linha, 100, sequencia_fibonacci);
            num = atoi(linha);

            if (num % 2 == 0)
            {
                if ((sequencia_fibonacci_PAR = fopen("sequencia_fibonacci_PAR.txt", "a")) == NULL)
                {
                    printf("Nao foi possivel ler o arquivo [sequencia_fibonacci_PAR.txt]");
                }
                else
                {
                    fprintf(sequencia_fibonacci_PAR, "%i\n", num);
                }
            }
            else
            {
                if ((sequencia_fibonacci_IMPAR = fopen("sequencia_fibonacci_IMPAR.txt", "a")) == NULL)
                {
                    printf("Nao foi possivel ler o arquivo [sequencia_fibonacci_IMPAR.txt]");
                }
                else
                {
                    fprintf(sequencia_fibonacci_IMPAR, "%i\n", num);
                }
            }
        }
    }
    fclose(sequencia_fibonacci);

    printf("Operacao realizada com sucesso!\n");

    return 0;
}