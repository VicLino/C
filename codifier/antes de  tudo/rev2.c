#include <stdio.h>

int main()
{
    int idade;
    printf("Idade: ");
    scanf("%i", &idade);

    if (idade <= 5)
        printf("bebê\n");
    else if (idade > 5 && idade <= 10)
        printf("crianca\n");
    else if (idade > 10 && idade <= 18)
        printf("adolescente\n");
    else if (idade > 18 && idade <= 50) 
        printf("adulto\n");
    else 
        printf("Idoso\n");
}