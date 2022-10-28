#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{

    char linhaStr[100];
    int num, linhaNum, linhaVerificada = 0, posicaoNum = 0, numInferior, numSuperior = 0;

    FILE *sequencia_fibonacci;

    sequencia_fibonacci = fopen("sequencia_fibonacci.txt", "r");

    printf("Digite o valor que deseja verificar: ");
    scanf("%i", &num);

    if (sequencia_fibonacci == NULL)
        printf("Arquivo nao encontrado!");
    else
    {
        while (!feof(sequencia_fibonacci))
        {
            fgets(linhaStr, 100, sequencia_fibonacci);
            linhaNum = atoi(linhaStr);
            linhaVerificada++;

            if (linhaNum == num)
            {
                posicaoNum = linhaVerificada;
                break;
            }
            else
            {
                numInferior = linhaNum;
                numSuperior = (numInferior / ((1 + sqrt(5)) / 2)) + numInferior;

                if ((num > numInferior) && (num < numSuperior))
                    break;
            }
        }
        fclose(sequencia_fibonacci);
    }

    if (posicaoNum != 0)
        printf("\nO numero digitado esta na posicao %i do arquivo. \n", posicaoNum);

    else
        printf("\nNao encontramos o numero %i, os numeros mais proximos dele seriam o %i e %i.\n", num, numInferior, numSuperior);

    return 0;
}