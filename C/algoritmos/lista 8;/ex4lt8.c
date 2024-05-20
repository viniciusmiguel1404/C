#include <stdio.h> 

int main()
{
	int x;

	printf("Me diga um  numero: ");
	scanf("%d", &x);

	printf("\nO antecessor de %d eh: %d", x, x-1);

	printf("\nO sucessor de %d eh: %d", x, x+1);




	return 0;
}
