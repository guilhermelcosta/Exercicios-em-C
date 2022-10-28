#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char string[100], maior_tam[100], maior_lex[100], menor_tam[100], menor_lex[100];

    printf("Digite quantas palavras voce quiser, digite 'fim' para parar o programa: ");
    fflush(stdin);
    scanf("%s", &string);

    strcpy(menor_lex, string);
    strcpy(menor_tam, string);
    strcpy(maior_lex, string);
    strcpy(maior_tam, string);

    while (strcmp(strlwr(string), "fim") != 0)
    {

        if (strlen(string) < strlen(menor_tam))
        {
            strcpy(menor_tam, string);
        }
        else
        {
            if (strlen(string) > strlen(maior_tam))
            {
                strcpy(maior_tam, string);
            }
        }

        if (strcasecmp(string, menor_lex) < 0)
        {
            strcpy(menor_lex, string);
        }
        else
        {
            if (strcasecmp(string, maior_lex) > 0)
            {
                strcpy(maior_lex, string);
            }
        }

        printf("Digite quantas palavras voce quiser, digite 'fim' para parar o programa: ");
        fflush(stdin);
        scanf("%s", &string);
    }

    printf("\nA menor string digitada, lexograficamente, e: %s \n", menor_lex);
    printf("\nA menor string digitada, em termos de tamanho, e: %s \n", menor_tam);
    printf("\nA maior string digitada, lexograficamente, e: %s \n", maior_lex);
    printf("\nA maior string digitada, em termos de tamanho, e: %s \n", maior_tam);

    return 0;
}
