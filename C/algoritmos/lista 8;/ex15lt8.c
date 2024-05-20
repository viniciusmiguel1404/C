#include <stdio.h>

int main()
{
	float salario, prestacao;

	printf("Informe o seu salario bruto: ");
	scanf("%f", &salario);
	printf("Informe o valor da prestacao: R$ ");
	scanf("%f", &prestacao);

	if((salario/100*30) >=  prestacao)
	{
		printf("Imprestimo consedido!");
	}
	else 
	{
		printf("Imprestimo negado!");
	}
	

	return 0;
}
