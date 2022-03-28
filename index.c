#include <stdio.h>
#include <math.h>

int main()
{
    
float fvalue, svalue, result;
char oprt;

    printf("Type the first value: ");
        scanf("%f", &fvalue);
        
    printf("Choose the operation: ");
        scanf(" %c", &oprt);
        
    printf("Type the second value: ");
        scanf("%f", &svalue);

    switch (oprt)
    {
        case '+':
            result=fvalue+svalue;
        break;

        case '-':
            result=fvalue-svalue;
        break;

        case '*':
        case 'x':
            result=fvalue*svalue;
        break;

        case '/':
        case ':':
            result=fvalue/svalue;
        break;
        
        default: 
            printf("Operacao e invalida");

        return 1;
    }
    printf("\n Result = %.0f \n", result);

    return 0;
}
