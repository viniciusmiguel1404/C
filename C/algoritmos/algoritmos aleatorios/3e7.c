#include <stdio.h>

int main()
{
	int i;

	for(i=1; i<=1000; i++)
	{
		if(i%7 == 0)
		{
			if(i%3 == 0)
			{
				printf("%d ", i);
			}
		}
		
	}
}
