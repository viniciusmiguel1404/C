#include <stdio.h>

int main()
{
	float x;

	printf("Qual o saldo da sua conta: R$");
	scanf("%f", &x);

	printf("o saldo da sua conta com 2%% de ajuste eh: R$%.2f",x+(x*0.02));
	

	return 0;
}
