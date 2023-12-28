#include <stdio.h>
// digite 5 notas, calcule a media e retorne para o usuario

int main(void)
{
    float notas[5] = {0};
    float total = 0;
    float media = 0;
  printf("Insira 5 notas: ");

    for (int i = 0; i < 5; ++i) {
        scanf("%f", &notas[i]);
    }
    for (int i = 0; i < 5; ++i) {
        total += notas[i];
    }
    media = total / 5;
    printf("A media das notas foi de: %.1f\n", media);

    return 0;
}