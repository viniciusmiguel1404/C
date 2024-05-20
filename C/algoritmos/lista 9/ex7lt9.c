#include <stdio.h>

int main()
{
	int i, vet[7], par= 0, impar=0;

	for(i=0;i<7; i++)
	{
		printf("Leia o elemento %d do vetor: ", i+1);
		scanf("%d", &vet[i]);		
	}
	printf("vetor = [");
	for(i=0;i<7;i++)
	{
		printf("%d ", vet[i]);
		if(vet[i]%2==0)
		{
			par++;
		}
		else
		{
			impar++;
		}
	}

	printf("\b]\nPercentuais --> PAR %.2f%% IMPAR: %.2f%%",(float)par/7*100, (float)impar/7*100 );
	
	return 0;
}
