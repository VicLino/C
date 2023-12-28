#include <stdio.h>

int main(void)  {

    int x = 10;
    double y = 22.60;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;
    printf("%i\n", &x);

    double soma = *pX + *pY; // 32.50
    printf("%d\n", soma);

    int *resultado;
    resultado = 6422280;

    printf("Valor x = %i \n", *resultado); // 10

    return 0;
}