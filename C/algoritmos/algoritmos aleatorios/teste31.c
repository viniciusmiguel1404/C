#include <stdio.h>

typedef struct horario
{
    int horas;
    int minuto;
    int segundo;
} horario;

int main()
{
    void receberHorarios(horario lista[5]);
    void printHorarios(horario lista[5]);
    horario listaHorarios[5];

    receberHorarios(listaHorarios[5]);
    printfHorarios(listaHorarios[5]);

    return 0;
}

void receberHorarios(horario lista[5])
{
    int i;
    for(i=0;i<5;i++){
        printf("Digite um numero: ");
        scanf("%d", &)
    }
}

void printHorarios(horario lista[5])
{
}
