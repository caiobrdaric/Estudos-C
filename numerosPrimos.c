#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, quociente, primo, maximo;
    printf("Digite o valor maximo:");
    scanf("%d", &maximo);
    for (numero = 2; numero <=maximo, numero++;)
    {
        primo = 1;
        for (quociente = 2; quociente<numero; quociente++)
        {
            if (numero % quociente == 0)
            {
                primo = 0;
            }
        }
        if (primo)
        {
            printf("/t %d", numero);
        }
    }
    return 0;
}