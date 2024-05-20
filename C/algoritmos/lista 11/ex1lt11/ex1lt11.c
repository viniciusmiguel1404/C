#include <stdio.h>
#include "maiorIdade.h"


int main()
{
	int vet[3];
	char repetir;
	do
	{
	printf("digite a idade do frank: ");
	scanf("%d", &vet[0]);

	printf("Digite a idade de Xutes: ");
	scanf("%d", &vet[1]);

	printf("Digite a idade de Belks ");
	scanf("%d", &vet[2]);
	if(vet[0]==vet[1]&& vet[1]== vet[2])
	{
		printf("\nAs idades são iguais: %d\n", vet[0]);
	}
	else
	{
	maiorIdade(vet);

	printf("Maior idade %d\n", vet[2]);
	}
	setbuf(stdin, NULL);
	printf("Deseja repetir o programa (S ou N) ");
	scanf("%c", &repetir);
	printf("\n");
	}while(repetir==83 || repetir == 115);

	return 0;
}
