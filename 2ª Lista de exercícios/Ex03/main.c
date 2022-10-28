#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    float temp;
    char estadoAgua[20];

    printf("Digite a temperatura em �C da �gua: ");
    scanf("%f", &temp);

    if (temp>=100)
    {
        strcpy(estadoAgua, "Gasoso");
    }
    else
    {
        if (temp<=0)
        {
            strcpy(estadoAgua, "S�lido");
        }
        else
        {
            strcpy(estadoAgua, "L�quido");
        }
    }

    printf("\nTemperatura da �gua em �C: %.2f \n", temp);
    printf("Estado da �gua: %s \n", estadoAgua);

    return 0;
}
