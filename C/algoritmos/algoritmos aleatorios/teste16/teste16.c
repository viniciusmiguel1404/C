#include <stdio.h>
#include "soma.h"

int main()
{
	int x,y;

	printf("Digite um numero: ");
	scanf("%d", &x);

	printf("Digite um numero: ");
	scanf("%d", &y);

	printf("\nA soma dos numeros: %d", soma(x,y));


	return 0;
}
