#include <stdio.h> 

int main()
{
	float x, y;

	printf("Digite um numero real: ");
	scanf("%f", &x);

	printf("Digite um numero real: ");
	scanf("%f", &y);

	printf("os dois numeros com apenas 3 casas decimais; %.3f  %.3f",x,y);

	return 0;
}
