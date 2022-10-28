#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int prim_num, seg_num, ter_num, qua_num, soma;
    float media;

    printf ("Digite quatro números para calcular a média, separados por vírgula. Ex: 1, 2, 3, 4 \n");
    scanf("%i,%i,%i,%i", &prim_num, &seg_num, &ter_num, &qua_num);
    printf("Os números digitados foram: %i, %i, %i, %i \n", prim_num, seg_num, ter_num, qua_num);

    soma = prim_num+seg_num+ter_num+qua_num;

    media=(float)soma/4;

    printf("A média dos números digitados é: %5.2f \n", media);

    return 0;
}
