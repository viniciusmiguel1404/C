#include <stdio.h>

int main()
{
	int vet[8], i, x=0, y=0;

	for(i=0;i<8;i++)
	{
		printf("Leia o elemento %d do vetor: ", i+1);
		scanf("%d", &vet[i]);
	}
	do
	{
		if(x<0 || x > 7)
		{
			printf("indice invalido, informe outro!");
		}
		printf("\ninforme o indice 1: ");
		scanf("%d", &x);
	}while(x<0 ||  x>7);
	do
		{
			if(y<0 || y > 7)
			{
				printf("indice invalido, informe outro!");
			}
			printf("\ninforme o indice 2: ");
			scanf("%d", &y);
		}while(y<0 ||  y>7);
	printf("Vetor = [");
	for(i=0;i<8;i++)
	{
		printf("%d", vet[i]);
	}
	printf("\b]\nA soma dos dois elementos vale %d", vet[x]+vet[y]);


	return 0;
}
