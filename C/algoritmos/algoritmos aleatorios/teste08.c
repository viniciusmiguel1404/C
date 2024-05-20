#include <stdio.h>
#include <stdlib.h>

int main()
{
	void soma_mais_um(int n);

	int x = 5;
	
	printf("antes da funcao x = %d\n", x);
	soma_mais_um(x);
	printf("depois da funcao x = %d ",x);

	return 0;
}

void soma_mais_um(int n)
{
	n = n+1;
	printf("Dentro da funcao: x = %d\n", n);
}
