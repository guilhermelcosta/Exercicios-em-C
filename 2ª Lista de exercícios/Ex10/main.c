#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    char nome[30], classe[30];
    float consumo, conta;
    int classe_num;

    printf("Por favor, digite o seu nome: ");
    fflush(stdin);
    scanf("%s", &nome);
    printf("Por favor, digite o seu consumo de �guas neste m�s (m�): ");
    scanf("%f", &consumo);
    printf("Por favor, digite a classifica��o do seu im�vel (residencial | comercial | industrial): ");
    fflush(stdin);
    scanf("%s", &classe);

    if ((strcmp(classe,"residencial")==0) || (strcmp(classe,"Residencial")==0))
    {
        classe_num=1;
    }
    else
    {

        if ((strcmp(classe,"comercial")==0) || (strcmp(classe,"Comercial")==0))
        {
            classe_num=2;
        }
        else
        {

            if ((strcmp(classe,"industrial")==0) || (strcmp(classe,"Industrial")==0))
            {
                classe_num=3;
            }
            else
            {
                printf("Classifica��o de im�vel inv�lida!");
            }
        }
    }

    switch (classe_num)
    {

    case 1:
        conta = 75 + 3.5*consumo;
        break;
    case 2:
        if (consumo<=80) {
            conta = 500*consumo;
        } else {
            conta=500*80 + 5.5*(consumo-80);
        }
        break;
    case 3:
        if (consumo<=100) {
            conta = 800*consumo;
        } else {
            conta=800*100 + 8*(consumo-100);
        }
        break;
    default:
        printf("Valor de conta indispon�vel");
    }

printf("\n%s, a sua conta deste m�s ser� de R$ %.2f\n", nome,conta);

    return 0;
}
