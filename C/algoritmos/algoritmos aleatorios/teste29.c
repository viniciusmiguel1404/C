#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
    float notas[N], media = 0.0;

    int i;

    for (i = 0; i < N; i++)
    {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }
    media = media / N;
    for (i = 0; i < N; i++)
    {
        if (notas[i] > media)
            printf("aluno %d: %f\n", i, notas[i]);
    }

    return 0;
}