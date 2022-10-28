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
    gets(string);

    for (i = 0; i <= strlen(string); i++)
    {
        if (string[i] == 'a' || string[i] == 'A')
        {
            cont++;
            cont == 1 ? printf("\nA letra 'a' aparece nas posicoes: %i ", i) : printf("%i ", i);
        }
    }

    printf("\n");

    if (cont == 0)
    {
        printf("\nNão foi verificada nenhuma letra 'a' na palavra digitada\n");
    }

    return 0;
}