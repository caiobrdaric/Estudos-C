#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char sexo, nome[30];
int idade;
float altura, peso;

do{
printf("Digite seu nome:");
    scanf("%30s", nome);
}while (strlen(nome) < 6);

do{
printf("Digite sua idade:");
    scanf("%d", &idade);
} while(idade <= 0 || idade >=100);

do{
printf("Digite sua peso:");
    scanf("%f", &peso);
} while(peso <= 0);

do{
printf("Digite sua altura:");
    scanf("%f", &altura);
} while(altura <= 0 );

do{
printf("Digite sua seu sexo(F/M):");
    sexo = getchar();
}while(sexo != 'F' && sexo != 'M');

printf ("\n Nome: %s", nome);
printf ("\n Idade: %d", idade);
printf ("\n Peso: %.2f", peso);
printf ("\n Altura: %.2f", altura);
printf ("\n Sexo: %c", sexo);
    return 0;
}