#include <stdio.h>
#include <stdlib.h>

int main()
{
	int menor(int x, int y);

	int x,y;
	char repetir;
	
	do
	{
	printf("\nDigite um numero: ");
	scanf("%d", &x);
	printf("Digite um numero: ");
	scanf("%d", &y);
	setbuf(stdin, NULL);
	printf("%d eh menor\n", menor(x,y));
	
	printf("deseja repetir o programa? (s ou n)");
	scanf("%c", &repetir);
	}while(repetir == 115 || repetir == 83);

	return 0;
}
int menor(int x, int y)
{
	if(x<y)
	{
		return x;
	}
	else if(x == y)
	{
		printf("\nos numeros são iguais\n");
		return x;
	}
	else 
	{
		return y;
	}
	
}
