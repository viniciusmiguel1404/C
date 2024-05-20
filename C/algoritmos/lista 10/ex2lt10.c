#include <stdio.h>
#include <stdlib.h>

int main()
{
	int calculaAreaRetangulo(int x, int y);
	int verificaArea(int retangulo1,int retangulo2);
	int x, y, x2, y2, retangulo1, retangulo2, maior;
	char repetir;
	do
	{
	printf("Digite a altura do primeiro retangulo: ");
	scanf("%d", &x);
	printf("Digite o lado do primeiro retangulo: ");
	scanf("%d", &y);

	printf("Digite a altura do segundo retangulo: ");
	scanf("%d", &x2);
	printf("Digite o lado do segundo retangulo: ");
	scanf("%d", &y2);
	setbuf(stdin, NULL);
	retangulo1 = calculaAreaRetangulo(x,y);
	retangulo2 = calculaAreaRetangulo(x2, y2);
	printf("Area do primeiro retangulo: %d", retangulo1);
	printf("\nArea do segundo retangulo; %d", retangulo2);

	maior = verificaArea(retangulo1, retangulo2);
	printf("\nA maior area eh: %d", maior );

	printf("\nDeseja repetir o programa (s ou n)? ");
	scanf("%c", &repetir);
	}while(repetir == 83 || repetir == 115);
	return 0;
}

int calculaAreaRetangulo(int x, int y)
{
	return x*y;
	
}

int verificaArea(int retangulo1, int retangulo2)
{
	if(retangulo1> retangulo2)
	{
		return retangulo1;
	}
	else
	{
		return retangulo2;
	}
}
