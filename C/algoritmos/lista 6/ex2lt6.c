#include <stdio.h> 

int main()
{
	
	int i,x, y;

	printf("Digite um numero: ");
	scanf("%d", &x);

	printf("Digite um segundo numero: ");
	scanf("%d", &y);

	if(y > x)
	{
		printf("Numeros do intervalo que divididos por 16 tenham resto 3: ");
		for(i=x; i<=y; i++)
		{
			if(i%16 ==3)
			{
				printf("\n%d", i);
			}
		}
	}
	else 
	{
		printf("Numeros do intervalo que divididos por 16 tenham resto 3: ");
		for(i=y; i<=x; i++)
		{
			if(i%16 == 3)
			{
				printf("\n%d, ", i);
			}
		}
	}
	






	return 0;
}
