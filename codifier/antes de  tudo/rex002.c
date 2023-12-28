#include <stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

int main(void)  {
    struct horario x[5] = {0};
    void relogio(struct horario x[]);
    void mensagem(struct horario x[]);

    relogio(x);
    mensagem(x);

    return 0;
}
void relogio(struct horario x[])  {
    for (int i = 0; i < 5; i++)  {
        printf("Digite um horario aleatorio no formato hh:mm:ss\n", i + 1);
        scanf("%i:%i:%i", &x[i].horas, &x[i].minutos, &x[i].segundos);
    }
}

void mensagem(struct horario x[])  {
    for (int j = 0; j < 5; j++) {
        printf("As horas sao: %i:%i:%i\n", x[j].horas, x[j].minutos, x[j].segundos);
    }
}