#include <stdio.h>

int main()
{
	float media(float nota1, float nota2, float nota3);
	
	float nota1, nota2, nota3;
	char repetir;

	do
	{
		do
		{
			printf("Digite a nota da primeira avaliacao: ");
			scanf("%f", &nota1);
			setbuf(stdin, NULL);
		}while(nota1<0 || nota1>10);
		do
		{
			printf("Digite a nota da segunda avaliacao: ");
			scanf("%f", &nota2);
			setbuf(stdin, NULL);
		}while(nota2<0 || nota2>10);
		do
		{
			printf("Digite a nota da terceira avaliacao: ");
			scanf("%f", &nota3);
			setbuf(stdin, NULL);
		}while(nota3<0 || nota3>10);

		printf("\nA media das notas: %.2f", media(nota1,nota2,nota3));

	setbuf(stdin, NULL);
	printf("\nDeseja repetir o programa (S ou N)? ");
	scanf("%c", &repetir);
	}while(repetir == 83 || repetir ==115);




	return 0;
}

float media(float nota1, float nota2, float nota3)
{
	return ((nota1*1)+(nota2*2)+(nota3*2))/5;
}









