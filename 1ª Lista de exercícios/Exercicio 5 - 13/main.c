#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    char letra1, letra2, letra3;

    printf("Digite o primeiro caracter: ");
    fflush(stdin);
    scanf("%c", &letra1);
    if (letra1>=97 && letra1<=122)
    {
        letra1=letra1-32;
    }

    printf("Digite o segundo caracter: ");
    fflush(stdin);
    scanf("%c", &letra2);
    if (letra2>=97 && letra2<=122)
    {
        letra2=letra2-32;
    }

    printf("Digite o terceiro caracter: ");
    fflush(stdin);
    scanf("%c", &letra3);
    if (letra3>=97 && letra3<=122)
    {
        letra3=letra3-32;
    }

    if (letra1>letra2 && letra1<letra3) {
        printf("O primeiro caracter(%c) est� entre o segundo(%c) e o terceiro(%c)? \n", letra1, letra2, letra3);
        printf("1 \n");
    } else {
        printf("O primeiro caracter(%c) est� entre o segundo(%c) e o terceiro(%c)? \n", letra1, letra2, letra3);
        printf("0 \n");
    }

    return 0;
}
