#include <stdio.h> 

int main()
{
	int x, y;

	printf("Digite um numero: ");
	scanf("%d", &x);

	printf("Digite um numero: ");
	scanf("%d", &y); 

	printf("\n%d + %d = %.2f", x,y,(float)x+y);

	printf("\n%d - %d = %.2f", x,y,(float)x-y);

	printf("\n%d * %d = %.2f", x,y,(float)x*y);

	printf("\n%d / %d = %.2f", x,y,(float)x/y);
	
	return 0;
}
