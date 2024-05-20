#include <stdio.h>
#include <stdlib.h>

int main()
{
	void imprime(int n);

	imprime(5);

	
}

void imprime(int n)
{
	int i;

	for(i=1; i<=n; i++)
	{
		printf("Linha %d\n", i);
	}
	
}
