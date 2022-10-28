#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int cod;

    printf("Códigos disponíveis: 221 | 211 | 311 | 312 | 332");
    printf("\nDigite um código de aluno: ");
    scanf("%i", &cod);

    switch(cod) {
    case 221:
        printf("\nAluno selecionado: Bernardo\n");
        break;
    case 211:
        printf("\nAluno selecionado: Estáquio\n");
        break;
    case 311:
        printf("\nAluno selecionado: Luiz\n");
        break;
    case 312:
        printf("\nAluno selecionado: Mário\n");
        break;
    case 332:
        printf("\nAluno selecionado: Arthur\n");
        break;
    default:
        printf("\nCódigo inválido!\n");
    }

    return 0;
}
