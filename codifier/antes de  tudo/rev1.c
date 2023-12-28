#include <stdio.h>

int main()
{
    int resultado = 1;
    int fatorial;
    printf("Qual numero fatorar? ");
    scanf("%i", &fatorial);
    
    for(int i = 1; fatorial >= i; fatorial--)
    {
        resultado *= fatorial;
    }
    printf("O resultado dessa desgraca e': %i", resultado);
}