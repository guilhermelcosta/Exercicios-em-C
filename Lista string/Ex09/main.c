#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char string[51];
    int i, j = 0, k = 0;

    printf("Digite uma string de ate 50 caracteres: ");
    fflush(stdin);
    gets(string);

    for (i = 0; string[i] != NULL; i++)
    {
        if (string[i] == ' ')
        {
            k = i;
            for (j = k; string[j] != NULL; j++)
            {
                string[j] = string[k + 1];
                k++;
            }
        }
    }

    printf("\nA string sem espaco e: %s\n", string);

    return 0;
}