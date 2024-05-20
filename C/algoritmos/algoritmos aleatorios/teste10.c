#include <stdio.h>

int main()
{
	float somaDeDigitos(float num1, float num2);

	float x,y,soma;
	
	printf("Digite um numero: ");
	scanf("%f", &x);

	printf("Digite um segundo numero: ");
	scanf("%f", &y);

	soma = somaDeDigitos(x,y);

	printf("\nA soma vale %f", soma);


	return 0;;
}

float somaDeDigitos(float num1, float num2)
{

	float valorAbsoluto(float x);

	if(num1 <0)
	{
		num1  = valorAbsoluto(num1);
	}
	if(num2 <0)
	{
		num2 = valorAbsoluto(num2);
	}

	return num1+num2;
	
}

float valorAbsoluto(float x)
{

	return x* -1;
	
}
