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

        esc==1? printf("\nEscolhido: Coroa\n"): printf("\nEscolhido: Cara\n"); //Exibir qual opção foi escolhida pelo usuário.

        bin=rand()%2; //Sortear número entre 0 e 1.

        bin==1? printf("Jogado: Coroa"):printf("Jogado: Cara"); //Verificar o número sorteado pelo computador, caso seja 1, exibe "coroa", se não, exibe "cara".

        if (esc==bin) //Exibe se o jogador acertou ou errou o palpite
        {
            printf("\nVocê acertou!\n");
            acertos++; //Quantifica os acertos;

        }
        else
        {
            printf("\nVocê errou!\n");
        }

    }

    if (acertos>=9)
    {
        printf("\nVocê é MUITO bom de chute, acertou %i dos 10, você deveria ser jogador de futebol!!\n", acertos);
    }
    else
    {
        if (acertos>=5 && acertos<9)
        {
            printf("\nVocê acertou %i dos 10, até que não foi tão mal em?!\n", acertos);
        }
        else
        {
            printf("\nVocê só acertou %i dos 10, não foi muito bem não em, bicho\n", acertos);
        }
    }

    return 0;
}
