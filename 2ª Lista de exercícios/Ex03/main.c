#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    float temp;
    char estadoAgua[20];

    printf("Digite a temperatura em ºC da água: ");
    scanf("%f", &temp);

    if (temp>=100)
    {
        strcpy(estadoAgua, "Gasoso");
    }
    else
    {
        if (temp<=0)
        {
            strcpy(estadoAgua, "Sólido");
        }
        else
        {
            strcpy(estadoAgua, "Líquido");
        }
    }

    printf("\nTemperatura da água em ºC: %.2f \n", temp);
    printf("Estado da água: %s \n", estadoAgua);

    return 0;
}
