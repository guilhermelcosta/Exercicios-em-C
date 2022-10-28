#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char string[51];
    int i, qtdeCaracter = 0, qtdeNumero = 0, qtdeSimbolosGerais = 0;

    printf("Digite uma string de ate 50 caracteres: ");
    fflush(stdin);
    gets(string);

    for (i = 0; string[i] != NULL; i++)
    {
        if ((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122))
        {
            qtdeCaracter++;
        }
        else
        {
            if ((string[i] >= 49 && string[i] <= 57))
            {
                qtdeNumero++;
            }
            else
            {
                qtdeSimbolosGerais++;
            }
        }
    }

    printf("\nA string digitada possui:\n * %i Caracteres \n * %i Numeros \n * %i Simbolos(nem numeros nem letras) \n", qtdeCaracter, qtdeNumero, qtdeSimbolosGerais);

    return 0;
}