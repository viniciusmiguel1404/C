#include <stdio.h>

int main()
{
	float  vet[10];
	int i;

	
	for(i=0;i<10;i++)
	{
		printf("Leia o elemento %i do vetor: ", i);
		scanf("%f", &vet[i]);
	}
	printf("Vetor A...:[");
	for(i=0;i<10;i++)
		{
			if(i % 2 ==0)
			{
				printf("%.2f ",vet[i]/2);
			}
			else
			{
				printf("%.2f ", vet[i]);
			}
		}
	printf("\b]\nVetor b...:[");
	for(i=0;i<10;i++)
			{
				if(i % 2 ==1)
				{
					printf("%.2f ",vet[i]*3);
				}
				else
				{
					printf("%.2f ", vet[i]);
				}
			}
	printf("\b]");




	return 0;
}
