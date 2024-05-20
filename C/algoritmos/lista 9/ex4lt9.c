#include <stdio.h>

int main()
{
	int i, veta[8], vetb[8];

	for(i=0;i<8;i++)
	{
		printf("Leia o elemento %d do vetor 1: ", i);
		scanf("%d", &veta[i]);
		printf("Leia o elemento %d do vetor 2: ", i);
		scanf("%d", &vetb[i]);
	}

	for(i=0;i<8;i++)
	{
		printf("\nv1[%d] = %d v2[%d] = %d v3[%d] = %d v4[%d] = %d v5[%d] = %d", i, veta[i], i, vetb[i], i, veta[i]-vetb[i], i, veta[i]+vetb[i], i, veta[i]*vetb[i]);
	}


	return 0;
}
