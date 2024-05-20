#include <stdio.h>

int main()
{
	int t, vm;

	printf("Qual o tempo da viagem?: ");
	scanf("%d", &t);

	printf("Qual a valocidade media que foi feita a viagem?: ");
	scanf("%d", &vm);

	printf("A distancia percorrida da viagem foi de: %d", t*vm);

	printf("\nA quantidade de litros consumidos na viagem foi de: %d LITROS", (t*vm)/12);

	return 0;
}
