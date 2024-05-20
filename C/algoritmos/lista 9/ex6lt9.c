#include <stdio.h> 

int main()
{
	int i, vet[5], total=0;

	for(i=0;i<5;i++)
	{
		printf("Leia o elemento %d do vetor: ", i+1);
		scanf("%d", &vet[i]);
	}
	printf("Vetor = [");
	for(i=0;i<5;i++)
	{
		printf("%d ", vet[i]);
		total = total+vet[i];
	}
	printf("\b]\nA soma eh %d e a media eh %.2f ", total, (float)total/5);

	return 0;
}
