#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[20], situacao[20];
    float nota1, nota2, nota3, media;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("Digite a sua 1� nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua 2� nota: ");
    scanf("%f", &nota2);
    printf("Digite a sua 3� nota: ");
    scanf("%f", &nota3);

    media=(nota1+nota2+nota3)/3;

    if (media>=6)
    {
        strcpy(situacao, "Aprovado");
    }
    else
    {
        strcpy(situacao, "Reprovado");
    }
    printf("\nNome: %s \n", nome);
    printf("M�dia apurada: %.2f \n", media);
    printf("Situa��o: %s \n", situacao);

    return 0;
}
