#include <stdio.h>

int main()
{
	int x,y,z;

	printf("Digite um numero: ");
	scanf("%d", &x);
	printf("Digite um numero: ");
	scanf("%d", &y);
	printf("Digite um numero: ");
	scanf("%d", &z);

	if(x>y && x>z)
	{
		printf("\n %d", x);
		if(y>z)
		{
			printf("\n %d",y);
			printf("\n %d", z);
		}
		else
		{
			printf("\n %d",z);
			printf("\n %d", y);
		}
		
	}
	
	if(y>x && y>z)
		{
			printf("\n %d", y);
			if(x>z)
			{
				printf("\n %d",x);
				printf("\n %d", z);
			}
			else
			{
				printf("\n %d",z);
				printf("\n %d", x);
			}
			
		}
	if(z>x && z>y)
		{
			printf("\n %d", z);
			if(x>y)
			{
				printf("\n %d",x);
				printf("\n %d", y);
			}
			else
			{
				printf("\n %d",y);
				printf("\n %d", x);
			}
			
		}

	return 0;
}
