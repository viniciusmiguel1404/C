#include <stdio.h>

int main()
{
    float arearetang(float x, float y);
    
    float base, altura;

    printf("me diga a base: ");
    scanf("%f", &base);

    printf("me diga a altura: ");
    scanf("%f", &altura);

    printf("a area do retangulo eh: %.2f", arearetang(base, altura));


}

float arearetang(float x, float y)
{
    return x*y;
}