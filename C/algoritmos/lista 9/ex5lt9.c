#include <stdio.h>

int main()
{
	int i, vet[10], par=0;

	for(i=0;i<10;i++)
	{
		printf("Leia o elemento %d do vetor : ", i);
		scanf("%d", &vet[i]);
	}
	printf("vetor = [");
	for(i=0;i<10;i++)
	{
		printf("%d ", vet[i]);
		if(vet[i] % 2 == 0)
		{
			par++;
		}
	}
	printf("\b]\nExistem %d numeros pares no vetor!", par);

	return 0;
}
