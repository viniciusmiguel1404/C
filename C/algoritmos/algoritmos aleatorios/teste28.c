#include <stdio.h>
#include <string.h>

int main()
{
	char nome[100];

	printf("informe seu nome: ");
	scanf("%100[^\n]", &nome);

	printf("seu nome tem %d caracteres.\n", strlen(nome));

	return 0;
}
