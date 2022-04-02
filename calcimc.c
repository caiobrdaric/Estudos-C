#include <stdio.h>
#include <math.h>

int main(){
    
    float altura;
    float peso;
    float calcImc;
    
    printf ("\n Digite seu peso:");
        scanf ("%f", &peso);
    printf ("\n Digite sua altura:");
        scanf ("%f", &altura);
        
    calcImc = peso/(altura*altura);
    
        printf("\n Seu Imc é %.2f = ", calcImc);
    
    if (calcImc < 18.5)    
    {
        printf("Abaixo do peso");            
    }
    else if (calcImc >= 18.5 && calcImc < 24.9)
    {
        printf("Peso normal");
    }
    else if (calcImc >= 24.9 && calcImc < 29.9)
    {
        printf("Sobrepeso");
    }
    else if (calcImc >= 29.9 && calcImc < 34.9)
    {
        printf("Obesidade grau I");
    }
    else if (calcImc >= 34.9 && calcImc < 39.9)
    {
        printf ("Obesidade grau II");
    }
    else if (calcImc > 40)
    {
        printf("Obesidade grau III (Morbida)");
    }
    return 0;
}
