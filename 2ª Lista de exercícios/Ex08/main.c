#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int cod;

    printf("C�digos dispon�veis: 221 | 211 | 311 | 312 | 332");
    printf("\nDigite um c�digo de aluno: ");
    scanf("%i", &cod);

    switch(cod) {
    case 221:
        printf("\nAluno selecionado: Bernardo\n");
        break;
    case 211:
        printf("\nAluno selecionado: Est�quio\n");
        break;
    case 311:
        printf("\nAluno selecionado: Luiz\n");
        break;
    case 312:
        printf("\nAluno selecionado: M�rio\n");
        break;
    case 332:
        printf("\nAluno selecionado: Arthur\n");
        break;
    default:
        printf("\nC�digo inv�lido!\n");
    }

    return 0;
}
