#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int x, y;

    printf("Digite um valor inteiro para X: ");
    scanf("%i", &x);

    if (x<0)
    {
        y=pow(x,2)+4;
        printf("\nConsiderando o valor de X, o valor de Y seria: %i, segundo a função Y=X²+4\n", y);
    }
    else
    {
        if (x>0)
        {
            y=pow(x,3)-3;
            printf("\nConsiderando o valor de X, o valor de Y seria: %i, segundo a função Y=X³-3\n", y);
        }
        else
        {
            printf("Erro no cálculo\n");
        }
    }

    return 0;
}
