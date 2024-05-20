#include <stdio.h>

typedef struct Horario
{
    int horas;
    int minutos;
    int segundos;
} horario;

int main()
{
    horario teste(horario x);

    horario agora;
    agora.horas = 10;
    agora.minutos = 42;
    agora.segundos = 58;

    horario proxima;

    proxima = teste(agora);

    printf("\n%d: %d : %d", proxima.horas, proxima.minutos, proxima.segundos);

    return 0;
}

horario teste(horario x)
{
    printf("%d: %d : %d", x.horas, x.minutos, x.segundos);

    x.horas = 100;
    x.minutos = 100;
    x.segundos = 100;

    return x;
}