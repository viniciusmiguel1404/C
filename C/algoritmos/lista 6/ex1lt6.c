#include <stdio.h>

int main()
{
	int i,x,y;

	printf("Digite um numero: ");
	scanf("%d", &x);

	printf("Digite um numero: ");
	scanf("%d", &y);

	if(x > y)
	{
		printf("\nOS impares no intervalo de [%d ate %d]: ", y, x);
		for(i=y; i<=x; i++)
		{
			if(i%7 == 0)
			{
				if(i%2 == 1 || i%2 == -1)
				{
					printf("%d ",i);
				}
			}
		}
	}
	else
	{
		printf("\nOS impares no intervalo de [%d ate %d]: ", x, y);
		for(i=x; i<=y; i++)
		{
			if(i%7 == 0)
			{
				if(i%2 == 1|| i%2 == -1)
				{
					printf("%d ", i);
					
				}
			}
		}
	}



	return 0;
}
