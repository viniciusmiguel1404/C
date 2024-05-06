#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;

    printf("Qual a primeira nota?: ");
    scanf("%f", &nota1);

    printf("Qual a segunda nota?: ");
    scanf("%f", &nota2);

    printf("Qual a terceira nota?: ");
    scanf("%f", &nota3);

    printf("A media do aluno foi de: %.2f", ((nota1*3)+(nota2*5)+(nota3*2))/10);


    return 0;
}