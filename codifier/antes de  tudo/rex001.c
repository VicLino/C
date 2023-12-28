#include <stdio.h>

int main(void)
{
    const int bimestresAnuais[] = 4;
    const int numeroDeAlunos[] = 4;
    
    float notasAlunos[numeroDeAlunos][bimestresAnuais] = {0};
    float mediasAlunos[numeroDeAlunos] = {0};

    float media = 0;
    
    printf("Insira as 4 notas do aluno 1: ");

    for (int aluno = 0; aluno < numeroDeAlunos; ++aluno)  {
        for (int notas = 0; notas < bimestresAnuais; ++notas)  {
            scanf("%f", &notasAlunos[aluno][notas]);
            media += notasAlunos[aluno][notas];
        }
        mediasAlunos[aluno] = media / bimestresAnuais;
        media = 0;
        printf("Insira as 4 notas do aluno %i", aluno + 2);
    }
    for (int aluno = 0; aluno < numeroDeAlunos; ++aluno)  {
        printf("A media do aluno %i e' %.2f", aluno + 1, mediasAlunos[aluno]);
    }
    return 0;
}