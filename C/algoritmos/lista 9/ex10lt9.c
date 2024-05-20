#include <stdio.h>

int main()
{
	int i, vet[10], menor, maior;

	for(i=0;i<10;i++)
	{
		printf("Leia o elemento %d do vetor: ", i+1);
		scanf("%d", &vet[i]);
	}
	menor = vet[0];
	maior = vet[0];
	for(i=0;i<10;i++)
	{
		if(vet[i] < menor)
		{
			menor = vet[i];
		}
		if(vet[i]> maior)
		{
			maior = vet[i];
		}
	}
	printf("menor valor: %d", menor);
	printf("\nmaior valor: %d", maior);

	return 0;
}
