#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int letra_A();
int letra_B();
int letra_C();
int letra_D();
int letra_E();
int letra_F();
int letra_G();
int letra_H();
int letra_I();
int letra_J();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    letra_A();
    letra_B();
    letra_C();
    letra_D();
    letra_E();
    letra_F();
    letra_G();
    letra_H();
    letra_I();
    letra_J();

    return 0;
}

int letra_A()
{
    //Leia um n�mero e imprima seu sucessor.
    setlocale (LC_ALL, "Portuguese");

    int num_atual, num_proximo;

    printf("*****Letra A***** \n");

    printf("Digite um valor inteiro: \n");
    scanf("%i",& num_atual);

    num_proximo=num_atual+1;

    printf("O n�mero sucessor de %i � %i",num_atual,num_proximo);

    return 0;
}

int letra_B()
{
    //Calcule a m�dia aritm�tica de quatro n�meros inteiros dados.
    setlocale (LC_ALL, "Portuguese");

    int prim_num, seg_num, ter_num, qua_num, soma;
    float media;

    printf("\n\n*****Letra B***** \n");

    printf ("Digite quatro n�meros para calcular a m�dia, separados por v�rgula. Ex: 1, 2, 3, 4 \n");
    scanf("%i,%i,%i,%i", &prim_num, &seg_num, &ter_num, &qua_num);
    printf("Os n�meros digitados foram: %i, %i, %i, %i \n", prim_num, seg_num, ter_num, qua_num);

    soma = prim_num+seg_num+ter_num+qua_num;

    media=(float)soma/4;

    printf("A m�dia dos n�meros digitados �: %5.2f", media);

    return 0;
}

int letra_C()
{
    //Fa�a um algoritmo que receba 3 (tr�s) notas e seus respectivos pesos, calcule e mostre a m�dia ponderada dessas notas.
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, peso1, peso2, peso3, soma;
    float media;

    printf("\n\n*****Letra C***** \n");

    printf("Digite o PRIMEIRO n�mero e seu respectivo peso, seguindo o exemplo. Ex.: 1, 2 > Sendo 1 o n�mero e 2 o seu peso \n");
    scanf ("%i,%i", &num1, &peso1);
    printf("Digite o SEGUNDO n�mero e seu respectivo peso, seguindo o exemplo. Ex.: 1, 2 > Sendo 1 o n�mero e 2 o seu peso \n");
    scanf ("%i,%i", &num2, &peso2);
    printf("Digite o TERCEIRO n�mero e seu respectivo peso, seguindo o exemplo. Ex.: 1, 2 > Sendo 1 o n�mero e 2 o seu peso \n");
    scanf ("%i,%i", &num3, &peso3);
    printf ("Os n�meros digitados foram: %i, %i e %i \n", num1, num2, num3);

    soma = num1*peso1 + num2*peso2 + num3*peso3;
    media = (float)soma/(peso1+peso2+peso3);

    printf("A m�dia ponderada dos n�meros digitados �: %5.2f", media);

    return 0;
}

int letra_D()
{
    //Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F).
    //F�rmula de convers�o: F = 9/5 * C + 32
    //Implemente uma altera��o neste exerc�cio para verificar o resultado.
    setlocale(LC_ALL, "Portuguese");

    float tempC, tempF;

    printf("\n\n*****Letra D***** \n");

    printf("Digite o valor da temperatura em Celsius(C) \n");
    scanf("%f", &tempC);

    tempF = tempC*9/5 + 32;

    printf("A sua temperatura em Fahrenheit (F) � de: %5.2f", tempF);

    return 0;
}

int letra_E()
{
    //Fa�a um algoritmo que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre o novo sal�rio.
    setlocale(LC_ALL, "Portuguese");

    float salarioAtual, salarioAjustado, aumento;

    printf("\n\n*****Letra E***** \n");

    printf("Digite o valor do seu sal�rio atual: \n");
    scanf("%f",  &salarioAtual);
    printf ("Digite o seu percentual de aumento. Ex.: 15% \n");
    scanf("%f", &aumento);

    salarioAjustado = salarioAtual*(1+aumento/100);

    printf ("O seu sal�rio ajustado (considerando o aumento) � de R$ %5.2f", salarioAjustado);

    return 0;
}

int letra_F()
{
    //Fa�a um algoritmo que pe�a ao usu�rio a base e a altura e calcule a �rea de um triangulo.
    setlocale(LC_ALL, "Portuguese");

    int base, altura;
    float area;

    printf("\n\n*****Letra F***** \n");

    printf("Digite a base(b) do tri�ngulo em metros: ");
    scanf("%i", &base);
    printf("Digite a altura(h) do tri�ngulo em metros: ");
    scanf("%i", &altura);

    area = (base*altura)/2.0;

    printf("A �rea do tri�ngulo � de %5.2f m�", area);

    return 0;
}

int letra_G()
{
    //Pedro comprou um saco de Ra��o com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ra��o em gramas.
    //Fa�a um algoritmo que receba o peso do Saco de ra��o e a quantidade de ra��o fornecida para cada gato. Calcule e mostre quanto restar� de ra��o no saco ap�s 5 (cinco) dias.
    setlocale(LC_ALL, "portuguese");

    float pesoSaco, qtdeGato, qtdeDia, pesoRestante;

    printf("\n\n*****Letra G***** \n");

    printf("Digite o peso do saco de ra��o adquirido em quilos (kg): ");
    scanf("%f", &pesoSaco);
    printf("Digite a quantidade de ra��o fornecida para cada gato em gramas (g): ");
    scanf ("%f", &qtdeGato);

    qtdeDia = qtdeGato*2;

    pesoRestante = pesoSaco - (qtdeDia/1000)*5;

    printf("Ap�s 5 dias, o saco de ra��o ter� um peso restante de %5.2f kg", pesoRestante);

    return 0;
}

int letra_H()
{
    //Ler dois n�meros inteiros para vari�veis a e b. Trocar o valor de b com o de a, e imprimi-los.
    setlocale(LC_ALL, "portuguese");

    int a, b, c;

    printf("\n\n*****Letra H***** \n");

    printf("Digite o valor de A: ");
    scanf("%i", &a);
    printf("Digite o valor de B: ");
    scanf("%i", &b);

    c=a;
    a=b;
    b=c;

    printf("Trocando os valores, o valor de A seria %i e de B seria %i", a, b);

    return 0;
}

int letra_I()
{
    //Leia um n�mero e imprima o resto da divis�o por 7. Utilize o comando resto (a,b) na linguagem C (a % b).
    setlocale(LC_ALL, "Portuguese");

    int num, num_positivo;
    float resto, aux;

    printf("\n\n*****Letra I***** \n");

    printf("Digite um n�mero inteiro: ");
    scanf("%i", &num);

    if (num>=0)
    {
        resto = num%7;
    }
    else
    {
        num_positivo=num*(-1);
        aux = num_positivo/7.0;
        aux = ceil(aux);
        resto = num+(7*aux);
    }


    printf("O resto da divis�o do n�mero digitado por 7 � %5.2f", resto);

    return 0;
}

int letra_J()
{
    //Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do n�mero de termos.
    setlocale(LC_ALL, "Portuguese");

    int termo1, termo2, nTermos, ultTermo, soma;

    printf("\n\n*****Letra J***** \n");

    printf("Digite o valor do primeiro termo da P.A: ");
    scanf("%i", &termo1);
    printf("Digite o valor do segundo termo da P.A: ");
    scanf("%i", &termo2);
    printf("Digite o n�mero de termos da P.A: ");
    scanf("%i", &nTermos);

    //A rela��o de "termo2-termo1" representa a raz�o(r) da P.A
    ultTermo=termo1+(nTermos-1)*(termo2-termo1);
    soma=(nTermos*(termo1+ultTermo))/2;

    printf("A soma dos termos da P.A informada �: %i", soma);

    return 0;
}

