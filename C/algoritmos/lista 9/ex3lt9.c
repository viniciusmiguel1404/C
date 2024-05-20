#include <stdio.h>

int main()
{

	int i, vetA[7], vetB[7];

	for(i=0;i<7;i++)
	{
		printf("Leia o elemento %d do vetor A: ", i);
		scanf("%d", &vetA[i]);
	}
	for(i=0;i<7;i++)
		{
			if(vetA[i] < 50)
			{
				vetB[i] = -1;
			}
			if(vetA[i] == 50)
			{
				vetB[i] = 0;
			}
			if(vetA[i]>50)
			{
				vetB[i] = 1;
			}

			printf("\nvetorA[%d] = %d vetorB[%d] = %d", i, vetA[i], i, vetB[i]);
		}





	return 0;
}
