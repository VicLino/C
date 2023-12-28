#include <stdio.h>

int main()
{
    char variavelChar = 'a';
    printf("%c\n", variavelChar);
    scanf("%c", variavelChar);


    bool variavelBool = true;
    printf("%i", variavelBool);


    //long + memoria do q necessario, ou seja só em casos específicos
    const int varInt = 1987516740;
    printf("%i\n", varInt);
    scanf("%i", &varInt);
    printf("%i\n", varInt);


    float varFloat = 10.10;
    printf("%f", varFloat);
    scanf("%f", &varFloat);


    //const tbm vale aqui quanto pra int
    //unseigned = limita a variável só a valores positivos 
    unsigned double variableDouble = 10.10;
    printf("%f\n", variableDouble);
    scanf("%lf", &variableDouble);

}