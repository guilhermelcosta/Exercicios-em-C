#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num;
    int intervalo_1, intervalo_2, soma; //vari�veis para verifica��o da caracter�stica
    double potencia;

    printf("Digite um n�mero inteiro de 4 d�gitos: ");
    scanf("%i", &num);

    if (num/100>100)
    {
        printf("\nEsse n�mero possui mais que 4 d�gitos\n");
    }
    else
    {
        intervalo_1 = num/100;
        intervalo_2 = round(((float)num/100-intervalo_1)*100);
        soma = ceil(intervalo_1+intervalo_2);
        potencia = pow(soma,2);


        if (potencia==num)
        {
            printf("\nO n�mero digitado possui caracter�stica semelhante ao n�mero 3025\n");
        }
        else
        {
            printf("\nO n�mero digitado n�o possui caracter�stica semelhante ao n�mero 3025\n");
        }
    }
    return 0;
}
