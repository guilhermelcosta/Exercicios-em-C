#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char stringOriginal[51], stringInvertida[51] = "";
    int i, tamanhoString;

    printf("Digite uma string de ate 50 caracteres: ");
    fflush(stdin);
    gets(stringOriginal);

    for (i = 0; stringOriginal[i] != NULL; i++)
    {
        tamanhoString = strlen(stringOriginal);

        stringInvertida[i] = stringOriginal[tamanhoString - (i + 1)];
    }

    printf("\nString invertida: %s \n", stringInvertida);

    return 0;
}