#include <stdio.h>

int main()
{
	int menu();

	int op = menu();
	printf("voce escolheu a opcao %d\n", op);
	return 0;
}


int menu()
{
	int i;
	do
	{
		printf("\t (1) Instruções\n");
		printf("\t (2) Jogar\n");
		printf("\t (3) Sair\n");
		printf("escolha uma opcao: ");
		scanf("%d", &i);
	}while((i<1)|| (i>3));
	return i;
}
