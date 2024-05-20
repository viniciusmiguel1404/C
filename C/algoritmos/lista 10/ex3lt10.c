#include <stdio.h>
#include <stdlib.h>

int main()
{
	float converte(int celsius);
	
	int celsius;
	char repetir;
	do{
	printf("Digite a temperatura em graus celsius: ");
	scanf("%d", &celsius);
	setbuf(stdin, NULL);
	printf("\nA temperatura em Fahrenheit eh: %.2f", converte(celsius));

	printf("\nDeseja repetir o programa? (S ou N) ");
	scanf("%c", &repetir);
	}while(repetir == 83 || repetir == 115);




	return 0;
}

float converte (int celsius)
{
	return celsius*1.8+32;
}
