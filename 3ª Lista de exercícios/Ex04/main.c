#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n, contador=0;
    double ser;

    printf("Digite a quantidade de termos da série: ");
    scanf("%i", &n);

    while (contador<n) {
        if (contador==0) {
            ser=1;
        } else {
            if (contador%2!=0) {
                ser=ser-(1/pow((1+(float)contador*2),3));
            } else {
                ser=ser+(1/pow((1+(float)contador*2),3));
            }
        }
        contador++;
    }

    printf("\nA soma da série digitada é de: %f\n", ser);


    return 0;
}
