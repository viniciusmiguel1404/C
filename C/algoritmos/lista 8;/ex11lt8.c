#include <stdio.h>

int main()
{
	int x,y;

	printf("Digite um numero: ");
	scanf("%d", &x);
	printf("Digite um numero: ");
	scanf("%d", &y);

	if(x+y > 10)
	{
		printf("A soma dos dois numeros eh maior que 10");
	}
	else
	{
	printf("a soma dos dois numeros nao eh maior que 10");
	}

	return 0;
}
