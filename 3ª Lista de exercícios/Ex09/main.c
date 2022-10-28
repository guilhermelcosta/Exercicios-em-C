#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int esc, n, bin, acertos=0;

    srand(time(NULL));

    for (n=0; n<10; n++)
    {
        printf("\nCara(0) ou coroa(1)? ");
        scanf("%i", &esc);

        esc==1? printf("\nEscolhido: Coroa\n"): printf("\nEscolhido: Cara\n"); //Exibir qual op��o foi escolhida pelo usu�rio.

        bin=rand()%2; //Sortear n�mero entre 0 e 1.

        bin==1? printf("Jogado: Coroa"):printf("Jogado: Cara"); //Verificar o n�mero sorteado pelo computador, caso seja 1, exibe "coroa", se n�o, exibe "cara".

        if (esc==bin) //Exibe se o jogador acertou ou errou o palpite
        {
            printf("\nVoc� acertou!\n");
            acertos++; //Quantifica os acertos;

        }
        else
        {
            printf("\nVoc� errou!\n");
        }

    }

    if (acertos>=9)
    {
        printf("\nVoc� � MUITO bom de chute, acertou %i dos 10, voc� deveria ser jogador de futebol!!\n", acertos);
    }
    else
    {
        if (acertos>=5 && acertos<9)
        {
            printf("\nVoc� acertou %i dos 10, at� que n�o foi t�o mal em?!\n", acertos);
        }
        else
        {
            printf("\nVoc� s� acertou %i dos 10, n�o foi muito bem n�o em, bicho\n", acertos);
        }
    }

    return 0;
}
