#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int prim_num, seg_num, ter_num, qua_num, soma;
    float media;

    printf ("Digite quatro n�meros para calcular a m�dia, separados por v�rgula. Ex: 1, 2, 3, 4 \n");
    scanf("%i,%i,%i,%i", &prim_num, &seg_num, &ter_num, &qua_num);
    printf("Os n�meros digitados foram: %i, %i, %i, %i \n", prim_num, seg_num, ter_num, qua_num);

    soma = prim_num+seg_num+ter_num+qua_num;

    media=(float)soma/4;

    printf("A m�dia dos n�meros digitados �: %5.2f \n", media);

    return 0;
}
