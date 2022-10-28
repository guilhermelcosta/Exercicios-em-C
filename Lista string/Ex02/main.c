#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char string[50];
    int i, cont = 0;

    printf("Digite uma palavra de ate 50 caracteres: ");
    fflush(stdin);
    scanf("%s", string);

    for (i = 0; i <= strlen(string); i++)
    {

        if (string[i] == 'a')
        {
            cont++;
        }
    }

    printf("Ao longo da palavra digitada, a letra 'a' apareceu %i vezes", cont);

    return 0;
}