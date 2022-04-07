#include <stdio.h>

int main(){

    float celcius, fahrenheit;
    float convercao1, convercao2;

    printf ("Digite o valor em celcius:");
    scanf ("%f", &celcius);
    convercao1 = celcius*1.8+32;
    convercao2 = celcius+273;
    printf ("Sua temperatura em fahrenheit é: %.0f°F \n", convercao1);
    printf ("E em kelvin é: %.0f°K", convercao2);
    return 0;
}