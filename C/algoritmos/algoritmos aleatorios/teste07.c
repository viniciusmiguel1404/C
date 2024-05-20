#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y;
	
	int maior (int x, int y);

	printf("Digite um numero: ");
	scanf("%d", &x);
	printf("Digite um numero: ");
	scanf("%d", &y);

	printf("\n%d eh maior",maior(x,y));
	


	return 0;
}

int maior(int x, int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
