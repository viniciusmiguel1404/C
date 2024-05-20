#include <stdio.h>

int main()
{
	int x;

	printf("Graus centígrados: ");
	scanf("%d", &x);

	printf("%d = Graus em Fahrenheit e %d = Graus centígrados",(9*x+160)/5, x);
	return 0;
}
