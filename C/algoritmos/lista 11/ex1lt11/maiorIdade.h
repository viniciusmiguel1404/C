int maiorIdade(int vet[])
{
    int i, j, maior;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            if (vet[i] < vet[j])
            {
                maior = vet[j];
            }
        }
    }
    return maior;
}

void repetirPrograma()
{
    char repetir;

    do
    {
        printf("Deseja repetir o programa? (s/n): ");
        scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S');

    printf("Programa encerrado.\n");
}