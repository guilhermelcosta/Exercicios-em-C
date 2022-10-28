#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num;
    int intervalo_1, intervalo_2, soma; //variáveis para verificação da característica
    double potencia;

    printf("Digite um número inteiro de 4 dígitos: ");
    scanf("%i", &num);

    if (num/100>100)
    {
        printf("\nEsse número possui mais que 4 dígitos\n");
    }
    else
    {
        intervalo_1 = num/100;
        intervalo_2 = round(((float)num/100-intervalo_1)*100);
        soma = ceil(intervalo_1+intervalo_2);
        potencia = pow(soma,2);


        if (potencia==num)
        {
            printf("\nO número digitado possui característica semelhante ao número 3025\n");
        }
        else
        {
            printf("\nO número digitado não possui característica semelhante ao número 3025\n");
        }
    }
    return 0;
}
