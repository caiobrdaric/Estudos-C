#include <stdio.h>

int main(){

    float L1, L2, U, H;
    float resultado;

    printf ("Digite o valor de L1:");
        scanf ("%f", &L1);

    printf ("Digite o valor de L2:");
        scanf ("%f", &L2);

    printf ("Digite o valor de U:");
        scanf ("%f", &U);

    printf ("Digite o valor de H:");
        scanf ("%f", &H);

    resultado = (L1-U)/(L2-H);

    printf ("O indice de viscosidade do seu oleo é %.2f:", resultado);

    if (resultado <= 0)
    {
        printf ("Muito baixo");
    }
    else if (resultado >=0 && resultado <=39)
    {
        printf ("Baixo");
    } 

    else if (resultado >= 40 && resultado <=79)
    {
        printf ("Médio");
    } 

    else if (resultado >= 80 && resultado <=119)
    {
        printf ("Alto");
    } 

    else if (resultado >= 120)
    {
        printf ("Muito Alto");
    } 

    return 0;
    }

/* Viscosidade é a propriedade que determina a resistência de um fluido ao cisalhamento.
O índice de viscosidade (IV) é uma característica comumente utilizada para indicar a variação da viscosidade 
de um fluido em diferentes temperaturas. Quanto menor a variação da viscosidade, maior o IV. Os modificadores 
de índice de viscosidade permitem modificar esta propriedade, ajudando a manter uma lubricidade adequada em 
diferentes temperaturas, o que é uma característica fundamental dos lubrificantes.*/