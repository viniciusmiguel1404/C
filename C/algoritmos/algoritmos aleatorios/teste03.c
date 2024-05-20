#include <stdio.h>
#include <stdlib.h>

int main()
{
		int fatorial(int n);
		int x,y;

		printf("digite n: ");
		scanf("%d", &x);

		y = fatorial(x);

		printf("fatorial de n = %d\n", y);
}

int fatorial (int n)
{
	int i,f =1;

	for(i=1; i<=n;i++)
	{
		f = f*i;
	}
	return f;
}
