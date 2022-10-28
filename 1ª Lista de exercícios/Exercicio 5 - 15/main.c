#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    char letra1;

    printf("Digite o primeiro caracter: ");
    fflush(stdin);
    scanf("%c", &letra1);

    if (letra1>=65 && letra1<=90)
    {
        printf("A letra digitada é maíscula? \n");
        printf("1 \n");
    } else {
        printf("A letra digitada é maíscula? \n");
        printf("0 \n");
    }

    return 0;
}
