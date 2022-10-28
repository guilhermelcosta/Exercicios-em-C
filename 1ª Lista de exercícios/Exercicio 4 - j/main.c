#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int termo1, termo2, nTermos, ultTermo, soma;

    printf("Digite o valor do primeiro termo da P.A: ");
    scanf("%i", &termo1);
    printf("Digite o valor do segundo termo da P.A: ");
    scanf("%i", &termo2);
    printf("Digite o número de termos da P.A: ");
    scanf("%i", &nTermos);

    //A relação de "termo2-termo1" representa a razão(r) da P.A
    ultTermo=termo1+(nTermos-1)*(termo2-termo1);
    soma=(nTermos*(termo1+ultTermo))/2;

    printf("A soma dos termos da P.A informada é: %i \n", soma);

    return 0;
}
