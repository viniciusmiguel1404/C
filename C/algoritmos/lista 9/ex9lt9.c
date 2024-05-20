#include <stdio.h>

int main()
{
	int i, vet[20];
	float dolar;

	printf("Informe a cotação do dolar (U$) em relacao ao real (R$): ");
	scanf("%f", &dolar);
	
	for(i=1;i<21;i++)
	{
		printf("%.2f (U$) = %.2f (R$)\n", (float)i, (float)i*dolar);
	}



	return 0;
}
