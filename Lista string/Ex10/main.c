#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char stringPrincipal[51], stringSecundaria[4];
    int i, j, k, cont = 0, apareceu = 0;

    printf("Digite uma string de ate 50 caracteres: ");
    fflush(stdin);
    gets(stringPrincipal);

    printf("Digite uma string de ate 3 caracteres: ");
    fflush(stdin);
    gets(stringSecundaria);

    for (i = 0; stringPrincipal[i] != NULL; i++)
    {
        k = i;
        cont = 0;

        for (j = 0; stringSecundaria[j] != NULL; j++)
        {
            if (stringPrincipal[k] == stringSecundaria[j])
            {
                cont++;
            }
            k++;

            if (cont == strlen(stringSecundaria))
            {
                apareceu++;

                apareceu == 1 ? printf("A string digitada apareceu na posicao: %i", i) : printf(" %i", i);
            }
        }
    }

    printf("\nA string digitada apareceu %i vezes", apareceu);

    return 0;
}