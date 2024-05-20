#include <stdio.h>

int main()
{
	int x;

	printf("Digite um numero: ");
	scanf("%d", &x);

	if(x%3 == 0 && x%7 == 0)
	{
		printf("%d eh divisivel por 3 e por 7", x);
	}
	else 
	{
		printf("%d nao eh divisivel por 3 e por 7", x);
	}

	return 0;
}
