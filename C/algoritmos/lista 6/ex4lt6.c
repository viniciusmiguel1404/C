#include <stdio.h>

int main()
{
	int  x, intervalo1=0, intervalo2=0, intervalo3=0, intervalo4=0;

	do
	{
	printf("digite um numero: ");
	scanf("%d", &x);

	if(x>=0 && x<=25)
	{
		intervalo1++;
	}
	if(x>=26 && x<=50)
	{
		intervalo2++;
	}
	if(x>=51 && x<=75)
	{
		intervalo3++;
	}
	if(x>=76 && x<=100)
	{
		intervalo4++;
	}
	}while(x>=0);

	printf("\nTeve %d numeros no intervalo de [0,25]", intervalo1);

	printf("\nTeve %d numeros no intervalo de [26, 50]", intervalo2);

	printf("\nTeve %d numeros no intervalo de [51,75]", intervalo3);

	printf("\nTeve %d numeros no intervalo de [76, 100]", intervalo4);

	

	

	return 0;
}
