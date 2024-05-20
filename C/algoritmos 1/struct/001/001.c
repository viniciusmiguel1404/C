#include <stdio.h>

int main()
{

    typedef struct Horario
    {
        int horas;
        int minutos;
        int segundos;
    } horario;

    horario agora;

    agora.horas = 15;
    agora.minutos = 17;
    agora.horas = 23;

    printf("%d:%d:%d", agora.horas, agora.minutos, agora.horas);

    return 0;
}