#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salarioAtual, salarioAjustado, aumento;

    printf("Digite o valor do seu salári atual: \n");
    scanf("%f",  &salarioAtual);

    printf ("Digite o seu percentual de aumento. Ex.: 15% \n");
    scanf("%f", &aumento);

    salarioAjustado = salarioAtual*(1+aumento/100);

    printf ("O seu salário ajustado (considerando o aumento) é de R$ %5.2f \n", salarioAjustado);

    return 0;
}
