#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float a, b, c, aux, teste1, teste2;

    printf("Digite o valor de 'a': ");
    scanf("%f", &a);
    printf("Digite o valor de 'b': ");
    scanf("%f", &b);
    printf("Digite o valor de 'c': ");
    scanf("%f", &c);

    if (a!=b && b!=c)
    {
        if ((b>=a && b<=c) || (b>=c && b<=a))
        {
            if (a>=c)
            {
                aux=c;
                c=a;
                a=aux;
            }
        }
        else
        {
            teste1=c-b;
            teste2=b-a;

            if (teste1>teste2)
            {
                if (c>=a)
                {
                    aux=b;
                    b=a;
                    a=aux;
                }
                else
                {
                    aux=c;
                    c=a;
                    a=b;
                    b=aux;
                }
            }
            else
            {
                if (c>=a)
                {
                    aux=c;
                    c=b;
                    b=aux;
                }
                else
                {
                    aux=c;
                    c=b;
                    b=a;
                    a=aux;
                }
            }
        }
    }

    printf("\nA sequência reordenada seria: %.2f, %.2f, %.2f\n", a, b, c);

    return 0;
}
