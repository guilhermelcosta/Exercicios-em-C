#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char string[50], caracter;
    int i, cont = 0;

    printf("Digite uma string de ate 50 caracteres: ");
    fflush(stdin);
    gets(string);
    printf("\nDigite agora um caracter (o programa considera 'A' e 'a' como caracteres diferentes): ");
    fflush(stdin);
    scanf("%c", &caracter);

    for (i = 0; i <= strlen(string); i++)
    {
        if (string[i] == caracter)
        {
            cont++;
            cont == 1 ? printf("\nO caracter digitado aparece na string nas posicoes: %i ", i) : printf("%i ", i);
        }
    }

    printf("\n");

    cont > 0 ? printf("\nO caracter digitado aparecer %i vezes na string\n", cont) : printf("\nNao foi verificada a existencia desse caracter na string digitada\n");

    return 0;
}