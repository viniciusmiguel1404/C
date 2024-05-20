#include <stdio.h>

int main()
{
    typedef struct Horario
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;

    } horario;

    horario agora;
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 45;

    horario depois;
    depois.horas = agora.horas + 2;
    depois.minutos = agora.minutos + 3;
    depois.segundos = agora.segundos + 10;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';

    printf("%d\n", depois.horas);
    printf("%d\n", depois.minutos);
    printf("%d\n", depois.segundos);
    printf("%f\n", depois.teste);
    printf("%c\n", depois.letra);

    

    return 0;
}