#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
 
    int estacao;
    printf("Digite numericamente o mes que deseja saber a estacao:");
    scanf ("%d", &estacao);
    
    printf("A estacao e:", estacao);

    switch (estacao)
    {
    case '1':
    case '2':
    case '3': 
        printf("Verao");
        break;

    case '4':
    case '5':
    case '6': 
        printf("Outono");
    break;

    case '7':
    case '8':
    case '9': 
        printf("Inverno");
    break;

    case '10':
    case '11':
    case '12': 
        printf("Primavera");
    break;
    
    default:
      printf("Invalido");

     return 1;
    } 
    return 0;
}