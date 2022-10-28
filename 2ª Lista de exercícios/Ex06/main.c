#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int x, y, z;

    printf("Digite o valor de 'x': ");
    scanf("%i", &x);
    printf("Digite o valor de 'y': ");
    scanf("%i", &y);
    printf("Digite o valor de 'z': ");
    scanf("%i", &z);

    if (x%y==0 && x%z==0) {
        printf("O valor de 'x' é divisível por 'y' e por 'z'\n");
    } else {
        if (x%y==0) {
            printf("O valor de 'x' é divisível por 'y', mas não por 'z'\n");
        } else {
            if (x%z==0) {
                printf("O valor de 'x' é divisível por 'z', mas não por 'y'\n");
            } else {
                    printf("O valor de 'x' não é divisível por 'y', nem por 'z'\n");
            }
        }
    }

    return 0;
}
