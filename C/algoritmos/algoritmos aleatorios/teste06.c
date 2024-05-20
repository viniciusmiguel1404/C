#include <stdio.h>
#include <stdlib.h>

int main()
{
	int soma(int x, int y);

	int x,y;

	printf("Digite um numero: ");
	scanf("%d", &x);
	printf("Digite um numero: ");
	scanf("%d", &y);

	printf("\nA soma de %d + %d = %d", x,y,soma(x,y));


	return 0;
}

int soma(int x, int y)
{
	return x+y;
}
