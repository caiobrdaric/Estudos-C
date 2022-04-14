#include <stdio.h>
#include <stdlib.h>

int main()
{

int valor;

    printf("\n Algoritmo para verificar se o numero digitado e multiplo de 2, 3, 5 ou nenhum deles \n\n\n\n Digite um número:");
        scanf("%d", &valor);
    if (valor % 2==0)
    {
        printf("\n O valor digitado é multiplo de 2!");
    }
    if (valor % 3==0)
    {
        printf("\n O valor digitado é multiplo de 3!");
    }
    if (valor % 5==0)
    {
        printf("\n O valor digitado é multiplo de 5!");
    }
    return 0;
}