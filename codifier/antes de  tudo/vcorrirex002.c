#include <stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

int main(void)  {

    void receberHoras(struct horario lista[]);
    void printarHoras(struct horario lista[]);

    struct horario listaHoras[5];

    receberHoras(listaHoras);
    printarHoras(listaHoras);



    return 0;
}

void receberHoras(struct horario lista[])  {
    for (int i = 0; i < 5; i++)  {
        printf("Digite o primeiro horario (hh:mm:ss): ", i + 1);
        scanf("%i:%i:%i", &lista[i].horas, &lista[i].minutos, &lista[i].segundos);
    }

}

void printarHoras(struct horario lista[])  {
    for (int i = 0; i < 5; i++)  {
        printf("O %i horario e' = %i:%i:%i\n", i + 1, 
                                               lista[i].horas, 
                                               lista[i].minutos, 
                                               lista[i].segundos);
    }

}