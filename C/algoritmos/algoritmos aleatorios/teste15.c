#include <stdio.h>

int varGlobal;

int main()
{
	void tabuada (void);

	do
	{
		printf("Informe um numero positivo (<= 0 para terminar): ");
		scanf("%d", &varGlobal);

		if(varGlobal> 0)
		{
			tabuada();
		}

		
	}while(varGlobal > 0);


	return 0;
}

void tabuada()
{
	int i , resultado;

	for(i=0;i<=10;i++)
	{
		resultado = varGlobal * i;
		printf("%d *%2d = %3d\n", varGlobal, i, resultado);
	}
}
