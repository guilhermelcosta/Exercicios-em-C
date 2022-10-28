#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float pesoSaco, qtdeGato, qtdeDia, pesoRestante;

    printf("Digite o peso do saco de ração adquirido em quilos (kg): ");
    scanf("%f", &pesoSaco);
    printf("Digite a quantidade de ração fornecida para cada gato em gramas (g): ");
    scanf ("%f", &qtdeGato);

    qtdeDia = qtdeGato*2;

    pesoRestante = pesoSaco - (qtdeDia/1000)*5;

    printf("Após 5 dias, o saco de ração terá um peso restante de %5.2f kg \n", pesoRestante);


    return 0;
}
