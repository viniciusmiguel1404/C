#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	int x, i, ii, num_possibilidades=0;
	char reiniciar;

	do
	{
	printf("Informe um valor entre 2 e 12: ");
	scanf("%d", &x);
	
	
	for(i=1; i<=x; i++)
	{
		for(ii=1; ii<=x; ii++)
		{
			if(i+ii ==7)
			{
				printf("%d + %d = %d\n", i, ii, x);
				num_possibilidades++;
			}
		}
	}

	printf("\nNumero de possibilidades: %d", num_possibilidades);
	printf("\nDeseja continuar no programa? (S/N): ");
	scanf(" %c", &reiniciar);

	}while(reiniciar == 115 || reiniciar == 83);
	if(reiniciar == 78 || reiniciar == 110)
	{
		printf("\nEncerrando o programa....");
	}
	return 0;
}
