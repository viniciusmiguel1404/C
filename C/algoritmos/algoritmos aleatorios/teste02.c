#include <stdio.h>

int quadrado(int a);
int quadrado2(int);

int main()
{
	int n1, n2, n3;

	printf("Digite um numero: ");
	scanf("%d", &n1);

	n2= quadrado(n1);
	n3 = quadrado2(n1);

	printf("o quadrado de n2 eh: %d", n2);

	printf("\no quadrado de n3 eh: %d", n3);
	
	return 0;
}

int quadrado(int a)
{
	return (a*a);
}

int quadrado2(int a)
{
	return (a*a);
}

