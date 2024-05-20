int  maiorIdade(int vet[3])
{
	int i, j, temporaria;

	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(vet[i]>vet[j])
			{
				temporaria= vet[i];
				vet[i]= vet[j];
				vet[j]=temporaria;
			}
		}
	}
}
