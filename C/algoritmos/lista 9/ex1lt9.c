#include <stdio.h>

int main()
{
	int i, vet[6];	

	for(i=0; i<6;i++)
	{
		printf("Leia o elemento %i do vetor: ", i);
		scanf("%i", &vet[i]);
	}
	printf("vetor em ordem...........[");
	for(i=0;i<6;i++)
	{
		printf("%i ", vet[i]);
	}
	printf("\b]\nvetor em ordem inversa...[");
       for(i=5; i>-1;i--)
       {
		printf("%i ", vet[i]);
       }		
       printf("\b]");	


	return 0;
}
