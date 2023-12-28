#include <stdio.h>

int main(void)  {

    int vetor[10] = [0, 4, 6 ,1 ,2 ,3 ,7 ,9 ,8, 5];

    void ordemCrescente(int vetor[], int n);

    ordemCrescente(vetor, 10);

    for (int i = 0; i < 10; i++)  {
        printf("%i", vetor[i]);
    }

    return 0;
}

void ordemCrescente(int vetor[], int n)   {
    int i, j, temporaria;

    for (i = 0; i < n; i++)  {
        for (j = i + 1; j < n; j++)  {
            if(vetor[i] > vetor[j])  {
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            }
        }
    }
}