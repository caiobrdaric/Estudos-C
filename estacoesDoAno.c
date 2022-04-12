#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int estacao;
    printf("Digite numericamente o mes que deseja saber a estacao:");
        scanf ("%d", &estacao);
    printf ("A estacao e:");
    if (estacao==1 || estacao==2 || estacao==3)
    {
        printf(" Verão");
    }
    if (estacao==4 || estacao==5 || estacao==6)
    {
        printf (" Outuno");
    }
    if (estacao==7 ||estacao==8 || estacao==9)
    {
        printf(" Inverno");
    }
    if (estacao==10 || estacao==11 || estacao==12)
    {
        printf(" Primavera");
    }
    return 0;
}