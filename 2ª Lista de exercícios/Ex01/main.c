#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int num;

    printf("Digite um número inteiro: ");
    scanf("%i", &num);

    if (num%2==0)
    {
        printf("O número digitado é par");
    }
    else
    {
        printf ("O número digitado é ímpar");
    }

    return 0;
}
