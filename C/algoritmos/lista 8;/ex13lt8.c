#include <stdio.h>

int main()
{
	int x;

	printf("Digite um numero: ");
	scanf("%d", &x);

	if(x%4 == 0)
	{
		printf("%d Eh multiplo de 4", x);
	}
	else 
	{
		printf("%d Nao eh multiplo de 4", x);
	}
	return 0;
}
