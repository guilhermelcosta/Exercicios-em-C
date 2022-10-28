#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int num_atual, num_proximo;

    printf("Digite um valor inteiro: \n");
    scanf("%i",& num_atual);

    num_proximo=num_atual+1;

    printf("O número sucessor de %i é %i",num_atual,num_proximo);

    return 0;
}
