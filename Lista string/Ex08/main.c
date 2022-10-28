#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char stringOriginal[51], stringSemEspaco[51] = "";
    int i, j = 0;

    printf("Digite uma string de ate 50 caracteres: ");
    fflush(stdin);
    gets(stringOriginal);

    for (i = 0; stringOriginal[i] != NULL; i++)
    {

        if (stringOriginal[i] != ' ')
        {
            stringSemEspaco[j] = stringOriginal[i];
        }
        else
        {
            i++;
            stringSemEspaco[j] = stringOriginal[i];
        }

        j++;
    }

    printf("\nA string sem espaco e: %s\n", stringSemEspaco);

    return 0;
}