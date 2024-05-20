#include <stdio.h>

typedef struct Horario
{
    int horas;
    int minutos;
    int segundos;
} horario;

int main()
{
    horario agora;
    agora.horas = 10;
    agora.minutos = 20;
    agora.segundos = 30;
    printf("%d:%d:%d", agora.horas, agora.minutos, agora.segundos);

    horario teste[5] = {{10,20,30},{54,24,99},{66,22,44},{99,88,77},{01,02,03}};

    int i;
    for(i=0;i<5;i++)
    {
    printf("\n%d:%d:%d\n", teste[i].horas, teste[i].minutos, teste[i].segundos);
    }


    return 0;
}