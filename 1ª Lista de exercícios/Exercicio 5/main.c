#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num1();
int num2();
int num3();
int num4();
int num5();
int num6();
int num7();
int num8();
int num9();
int num10();
int num11();
int num12();
int num13();
int num14();
int num15();

int main()
{
    setlocale(LC_ALL, "portuguese");

    num1();
    num2();
    num3();
    num4();
    num5();
    num6();
    num7();
    num8();
    num9();
    num10();
    num11();
    num12();
    num13();
    num14();
    num15();

    return 0;
}

int num1()
{
    //Ler um valor inteiro do teclado e dizer se � par .
    setlocale(LC_ALL,"portuguese");

    printf("*****N�mero 1***** \n");

    int valor;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    printf("O valor digitado (%i) � par? \n", valor);

    if (valor%2==0)
    {
        printf("1 \n");
    }

    if (valor%2!=0)
    {
        printf("0 \n");
    }


    return 0;
}

int num2()
{
    //Ler um valor inteiro do teclado e dizer se � �mpar.
    setlocale(LC_ALL,"portuguese");

    int valor;

    printf("\n\n*****N�mero 2***** \n");

    printf("Digite um valor: ");
    scanf("%i", &valor);

    printf("O valor digitado (%i) � �mpar? \n", valor);

    if (valor%2!=0)
    {
        printf("1 \n");
    }

    if (valor%2==0)
    {
        printf("0 \n");
    }


    return 0;
}

int num3()
{
    //Ler um valor inteiro do teclado e dizer se �mpar e maior que 100.
    setlocale(LC_ALL,"portuguese");

    int valor;

    printf("\n\n*****N�mero 3***** \n");

    printf("Digite um valor: ");
    scanf("%i", &valor);

    printf("O valor digitado (%i) � �mpar? \n", valor);

    if (valor%2!=0)
    {
        printf("1 \n");
    }

    if (valor%2==0)
    {
        printf("0 \n");
    }

    printf("O valor digitado (%i) � maior do que 100? \n", valor);

    if (valor>100)
    {
        printf("1 \n");
    }

    if (valor<=100)
    {
        printf("0 \n");
    }

    return 0;
}

int num4()
{
    //Ler um valor inteiro do teclado e dizer se � par e menor que 100, ou �mpar e maior que 100.
    setlocale(LC_ALL,"portuguese");

    int valor;

    printf("\n\n*****N�mero 4***** \n");

    printf("Digite um valor: ");
    scanf("%i", &valor);

    if (valor%2==0 && valor<100)
    {
        printf("O valor digitado (%i) � par e menor que 100? \n", valor);
        printf("1 \n");
    }
    else
    {
        printf("O valor digitado (%i) � par e menor que 100? \n", valor);
        printf("0 \n");
    }

    if (valor%2!=0 && valor>100)
    {
        printf("O valor digitado (%i) � �mpar e maior que 100? \n", valor);
        printf("1 \n");
    }
    else if (valor%2!=0 && valor<100)
    {
        printf("O valor digitado (%i) � �mpar e maior que 100? \n", valor);
        printf("0 \n");
    }

    return 0;
}

int num5()
{
    //Ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75).
    setlocale(LC_ALL,"portuguese");

    int valor;

    printf("\n\n*****N�mero 5***** \n");

    printf("Digite um valor: ");
    scanf("%i", &valor);

    if (valor>25 && valor<75)
    {
        printf("O valor digitado (%i) pertence ao intervalo aberto de (25:75)? \n", valor);
        printf("1 \n");
    }
    else
    {
        printf("O valor digitado (%i) pertence ao intervalo aberto de (25:75)? \n", valor);
        printf("0 \n");
    }

    return 0;
}

int num6()
{
    //Ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado entre [25:75].
    setlocale(LC_ALL,"portuguese");

    int valor;

    printf("\n\n*****N�mero 6***** \n");

    printf("Digite um valor: ");
    scanf("%i", &valor);

    if (valor>=25 && valor<=75)
    {
        printf("O valor digitado (%i) pertence ao intervalo fechado de [25:75]? \n", valor);
        printf("1 \n");
    }
    else
    {
        printf("O valor digitado (%i) pertence ao intervalo fechado de [25:75]? \n", valor);
        printf("0 \n");
    }

    return 0;
}

int num7()
{
    //Ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99].
    setlocale(LC_ALL,"portuguese");

    int valor;

    printf("\n\n*****N�mero 7***** \n");

    printf("Digite um valor: ");
    scanf("%i", &valor);

    if (valor>=15 && valor<=45)
    {
        printf("O valor digitado (%i) pertence ao intervalo fechado de [15:45]? \n", valor);
        printf("1 \n");
        printf("O valor digitado (%i) pertence ao intervalo fechado de [66:99]? \n", valor);
        printf("0 \n");
    }
    else if (valor>=66 && valor<=99)
    {
        printf("O valor digitado (%i) pertence ao intervalo fechado de [66:99]? \n", valor);
        printf("1 \n");
        printf("O valor digitado (%i) pertence ao intervalo fechado de [15:45]? \n", valor);
        printf("0 \n");
    }
    else
    {
        printf("O valor digitado (%i) N�O pertence ao intervalo fechado de [15:45] nem [66:99] \n", valor);
    }

    return 0;
}

int num8()
{
    //Ler dois valores inteiros do teclado e dizer se o primeiro � par e o segundo � �mpar.
    setlocale(LC_ALL, "portuguese");

    int valor1, valor2;

    printf("\n\n*****N�mero 8***** \n");

    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%i", &valor2);

    if (valor1%2==0 && valor2%2!=0)
    {
        printf("O primeiro valor � par e o segundo � �mpar? \n");
        printf("1 \n");
    }
    else
    {
        printf("O primeiro valor � par e o segundo � �mpar? \n");
        printf("0 \n");
    }

    return 0;
}

int num9()
{
    //Ler dois valores inteiros do teclado e dizer se o primeiro � par e positivo, e o segundo � �mpar e negativo.
    setlocale(LC_ALL, "portuguese");

    int valor1, valor2;

    printf("\n\n*****N�mero 9***** \n");

    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%i", &valor2);

    if (valor1%2==0 && valor1>0)
    {
        printf("O primeiro valor digitado (%i) � par e positivo? \n", valor1);
        printf ("1 \n");
    }
    else
    {
        printf("O primeiro valor digitado (%i) � par e positivo? \n", valor1);
        printf("0 \n");
    }

    if (valor2%2!=0 && valor2<0)
    {
        printf("O segundo valor digitado (%i) � �mpar e negativo? \n", valor2);
        printf ("1 \n");
    }
    else
    {
        printf("O segundo valor digitado (%i) � �mpar e negativo? \n", valor2);
        printf("0 \n");
    }

    return 0;
}

int num10()
{
    //Ler dois valores reais do teclado e dizer se o primeiro � maior, menor ou igual ao segundo.
    setlocale(LC_ALL, "portuguese");

    int valor1, valor2;

    printf("\n\n*****N�mero 10***** \n");

    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%i", &valor2);

    if (valor1==valor2)
    {
        printf("O primeiro valor (%i) � igual ao segundo (%i) \n", valor1, valor2);
    }
    else if (valor1>valor2)
    {
        printf("O primeiro valor (%i) � maior que o segundo (%i) \n", valor1, valor2);
    }
    else
    {
        printf("O primeiro valor (%i) � menor que o segundo (%i) \n", valor1, valor2);
    }

    return 0;
}

int num11 ()
{
    //Ler tr�s valores reais do teclado e dizer se o primeiro est� entre os outros dois.
    setlocale(LC_ALL,"portuguese");

    float valor1, valor2, valor3;

    printf("\n\n*****N�mero 11***** \n");

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);

    if (valor1>valor2 && valor1<valor3)
    {
        printf("O primeiro valor(%5.2f) est� entre o segundo(%5.2f) e terceiro(%5.2f) valor? \n", valor1,valor2,valor3);
        printf("1 \n");
    }
    else
    {
        printf("O primeiro valor(%5.2f) est� entre o segundo(%5.2f) e terceiro(%5.2f) valor? \n", valor1,valor2,valor3);
        printf("0 \n");
    }

    return 0;
}

int num12 ()
{
    //Ler tr�s valores reais do teclado e dizer se o primeiro n�o est� entre os outros dois.
    setlocale(LC_ALL,"portuguese");

    float valor1, valor2, valor3;

    printf("\n\n*****N�mero 12***** \n");

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);

    if (valor1<valor2 || valor1>valor3)
    {
        printf("O primeiro valor(%.2f) N�O est� entre o segundo(%.2f) e terceiro(%.2f) valor? \n", valor1,valor2,valor3);
        printf("1 \n");
    }
    else
    {
        printf("O primeiro valor(%.2f) N�O est� entre o segundo(%.2f) e terceiro(%.2f) valor? \n", valor1,valor2,valor3);
        printf("0 \n");
    }

    return 0;
}

int num13()
{
    //Ler tr�s valores literais (caracteres) do teclado e dizer se o primeiro est� entre os outros dois.
    setlocale(LC_ALL,"portuguese");

    char letra1, letra2, letra3;

    printf("\n\n*****N�mero 13***** \n");

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

    if (letra1>letra2 && letra1<letra3)
    {
        printf("O primeiro caracter(%c) est� entre o segundo(%c) e o terceiro(%c)? \n", letra1, letra2, letra3);
        printf("1 \n");
    }
    else
    {
        printf("O primeiro caracter(%c) est� entre o segundo(%c) e o terceiro(%c)? \n", letra1, letra2, letra3);
        printf("0 \n");
    }

    return 0;
}

int num14()
{
    //Ler tr�s valores literais (caracteres) do teclado e dizer se est�o em ordem crescente lexicograficamente.
    setlocale(LC_ALL,"portuguese");

    char letra1, letra2, letra3;

    printf("\n\n*****N�mero 14***** \n");

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

    if (letra1<letra2 && letra2<letra3)
    {
        printf("Os caracteres est�o em ordem crescente lexograficamente? (de A para Z) \n");
        printf("1 \n");
    }
    else
    {
        printf("Os caracteres est�o em ordem crescente lexograficamente? (de A para Z) \n");
        printf("0 \n");
    }

    return 0;
}

int num15()
{
    //Ler um valor literal (caractere) do teclado e dizer se � uma letra mai�scula.
    setlocale(LC_ALL,"portuguese");

    char letra1;

    printf("\n\n*****N�mero 15***** \n");

    printf("Digite o primeiro caracter: ");
    fflush(stdin);
    scanf("%c", &letra1);

    if (letra1>=65 && letra1<=90)
    {
        printf("A letra digitada � ma�scula? \n");
        printf("1 \n");
    }
    else
    {
        printf("A letra digitada � ma�scula? \n");
        printf("0 \n");
    }

    return 0;
}
