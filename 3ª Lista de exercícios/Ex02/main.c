#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    float num, maior=0, menor, soma=0, media, contador=0;

    printf("Digite um n�mero (insira '-1' para terminar o programa): ");
    scanf("%f", &num);

    menor=num;

    while (num!=-1)
    {
        if (num>maior)
        {
            maior=num;
        }
        else
        {
            if (num<menor)
            {
                menor=num;
            }
        }

        soma=soma+num;
        contador++;

            printf("Digite um n�mero (insira '-1' para terminar o programa): ");
    scanf("%f", &num);
    }

    media=soma/contador;

    printf("\nO maior n�mero digitado foi: %.2f\n", maior);
    printf("\nO menor n�mero digitado foi: %.2f\n", menor);
    printf("\nA m�dia dos n�meros digitados foi: %.2f", media);

    return 0;
}
