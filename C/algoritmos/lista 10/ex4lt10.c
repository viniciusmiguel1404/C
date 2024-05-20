#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dobrar(int x);
	int somaDobro(int x, int y);
	int triploDobroSoma(int x);
	
	int x, y;
	char repetir;
	do {

	printf("Digite o primeiro numero: ");
	scanf("%d", &x);

	printf("Digite o segundo numero: ");
	scanf("%d", &y);

	printf("\nO dobro do primeiro numero: %d", dobrar(x));
	printf("\nO dobro do segundo numero: %d", dobrar(y));
	printf("\nA soma dos dobros dos numeros: %d", somaDobro(x,y));
	printf("\nO triplo da soma dos dobros dos numeros: %d", triploDobroSoma(somaDobro(x,y)));

	setbuf(stdin, NULL);
	printf("\nDeseja repetir o programa? ");
	scanf("%c", &repetir);
		
	}while(repetir == 83 || repetir == 115);



	return 0;
}

int dobrar (int x)
{
	return x*2;
}

int somaDobro(int x, int y)
{
	int dobrar(int x);

	return dobrar(x)+dobrar(y);
	
}

int triploDobroSoma(int x)
{
	return x*3;
}








