#include <stdio.h>

int main()
{
	int i, idade, menor_idade = 99, maior_idade=18, soma_idade= 0, percentual1, percentual2, percentual3;

	for(i = 1; i <= 10; i++)
	{ 

		do
		{
			printf("Qual a idade do %dº atleta: ", i);
			scanf("%d", &idade);

			if(idade <18 || idade >99)
			{
				printf("Digite uma idade valida! entre 18 e 99...\n");
			}

			if(menor_idade > idade)
			{
				menor_idade = idade;
			}

			if(maior_idade < idade)
			{
				maior_idade = idade;
			}

			if(idade >= 18 && idade <= 50)
			{
				percentual1++;
			}

			if(idade >=51 && idade <=75)
			{
				percentual2++;
			}

			if(idade >= 76 && idade <= 99)
			{
				percentual3++;
			}
			
			soma_idade = soma_idade+idade;

			
			
		}
		while(idade <18 || idade >99);



		
	}

	printf("\nA menor idade: %d", menor_idade);
	
			printf("\nA maior idade: %d", maior_idade);
	
			printf("\nA somatoria das idade: %d", soma_idade);
	
			printf("\nA media das idade: %d", soma_idade/10);
	
			printf("\nO percentual de idades entre 18 e 50 anos: %d%%", percentual1*10);
	
			printf("\nO percentual de idades entre 51 e 75 anos: %d%%", percentual2*10);
		
			printf("\nO percentual de idades entre 76 e 99 anos: %d%%", percentual3*10);
	



	return 0;
}