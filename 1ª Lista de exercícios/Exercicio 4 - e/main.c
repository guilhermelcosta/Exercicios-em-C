#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salarioAtual, salarioAjustado, aumento;

    printf("Digite o valor do seu sal�ri atual: \n");
    scanf("%f",  &salarioAtual);

    printf ("Digite o seu percentual de aumento. Ex.: 15% \n");
    scanf("%f", &aumento);

    salarioAjustado = salarioAtual*(1+aumento/100);

    printf ("O seu sal�rio ajustado (considerando o aumento) � de R$ %5.2f \n", salarioAjustado);

    return 0;
}
