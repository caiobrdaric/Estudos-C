#include <stdio.h>

int main(){

    float celcius;
    float fahrenheit, kelvin;

    printf ("Digite o valor em celcius:");
    scanf ("%f", &celcius);
    fahrenheit = celcius*1.8+32;
    kelvin = celcius+273;
    printf ("Sua temperatura em Fahrenheit é: %.0f°F \n", fahrenheit);
    printf ("E em Kelvin é: %.0f°K", kelvin);
    return 0;
}