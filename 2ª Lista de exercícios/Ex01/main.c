#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%i", &num);

    if (num%2==0)
    {
        printf("O n�mero digitado � par");
    }
    else
    {
        printf ("O n�mero digitado � �mpar");
    }

    return 0;
}
