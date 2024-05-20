#include <stdio.h>

int main()
{
	int l, vet[6];

	for(l=0; l<6; l++)
	{
		printf("Leia o elemento %d do vetor: ",l+1);
		scanf("%d", &vet[l]);
	}
	printf("vetor em ordem...........[");
	for(l=0; l<6; l++)
	{
		printf("%d ", vet[l]);
	}
	printf("\b]\nvetor em ordem inversa...[");
	for(l=5; l>-1; l--)
		{
			printf("%d ", vet[l]);
		}
	printf("\b]");

	
	return 0;
}
