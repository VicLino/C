#include <stdio.h>

int main(void)  {

    int vetor[3] = {0, 1, 2};
    int *ponteiro = &vetor[2];

    printf("%i\n", *ponteiro);

    return 0;
}