#include <stdio.h>

//pedir dois inteiros
//calcule se o primeiro é / pelo segundo
//retorne o resultado

int main()
{
    int inteiro1;
    int inteiro2;
    printf("Digite dois numeros inteiros: ");
    scanf("%i %i", &inteiro1, &inteiro2);

    int calculo = inteiro1 / inteiro2;

    if (inteiro2 == 0)  {
        printf("Divisão por 0 não rola\n");
    }
    else  {
        if (inteiro1 % inteiro2 == 0)   {
            printf("%i numero e' divisivel %i.\n", inteiro1, inteiro2);
            printf("%i", calculo);
        }
        else 
            printf("%i nao e' divisivel pelo %i", inteiro1, inteiro2);
    }



    return 0;
}
