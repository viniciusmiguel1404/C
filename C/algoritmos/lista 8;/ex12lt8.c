#include <stdio.h>

int main()
{
	int x,y;

	printf("Digite um numero: ");
	scanf("%d", &x);
	printf("Digite um numero: ");
	scanf("%d", &y);

	if(x+y > 20)
	{
		printf("%d", x+y+8);
	}
	else
	{
		printf("%d", x+y-5);
	}
	
	

	return 0;
}
