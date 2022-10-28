#include <stdlib.h>
#include <stdio.h>

int main()
{

    FILE *sequencia_fibonacci;

    int numAnterior = 0, numAtual = 0, proximoNumero = 1;

    if ((sequencia_fibonacci = fopen("sequencia_fibonacci.txt", "w")) == NULL)
    {
        printf("Erro de abertura do arquivo!");
    }
    else
    {

        for (int i = 1; i < 64; i++)
        {
            if (i == 1)
            {
                fprintf(sequencia_fibonacci, "%i\n", proximoNumero);

                numAnterior = numAtual;
                numAtual = proximoNumero;
            }

            proximoNumero = numAtual + numAnterior;

            fprintf(sequencia_fibonacci, "%i\n", proximoNumero);

            numAnterior = numAtual;
            numAtual = proximoNumero;
        }
    }

    printf("Sequencia Fibonacci salva com sucesso!\n");

    return 0;
}