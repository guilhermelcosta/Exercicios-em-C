#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float tempC, tempF;

    printf("Digite o valor da temperatura em Celsius(C) \n");
    scanf("%f", &tempC);

    tempF = tempC*9/5 + 32;

    printf("A sua temperatura em Fahrenheit (F) é de: %5.2f \n", tempF);

    return 0;
}
