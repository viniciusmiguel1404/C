#include <stdio.h>
#include "esfera.h"

int main()
{
	float raio;
	char repetir;
	do
	{
	printf("Digite o raio: ");
	scanf("%f", &raio);

	printf("O volume da esfera eh: %.2f", esfera(raio));

	setbuf(stdin,NULL);
	printf("\nDeseja repetir o programa (S ou N)? ");
	scanf("%c", &repetir);
	printf("\n");
	}while(repetir == 83 || repetir == 115);





	return 0;
}
