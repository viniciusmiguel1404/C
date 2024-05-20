#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int bimestreanuais = 4;
	const int numerodealunos = 4;

	int aluno, notas;

	float notasAlunos[numerodealunos][bimestreanuais];
	float mediaAlunos[numerodealunos];
	float media=0;

	
	printf("Insira as 4 notas do aluno 1: \n");

	for(aluno=0; aluno<numerodealunos;aluno++)
	{
		for(notas=0;notas<bimestreanuais;notas++)
		{
			scanf("%f", &notasAlunos[aluno][notas]);
			media = media+ notasAlunos[aluno][notas];
		}
	mediaAlunos[aluno] = media / bimestreanuais;
	media = 0;
	printf("insira as 4 notas do aluno %d: \n", aluno+2);
	}
	for(aluno = 0; aluno < numerodealunos; aluno++)
	{
		printf("A media do aluno %d eh %.2f\n", aluno+1, mediaAlunos[aluno]);
	}
	


	return 0;
}
