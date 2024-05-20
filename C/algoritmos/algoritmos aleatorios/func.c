#include <stdio.h>

int main()
{
	 
	
	float calcularAreaRetang(float x, float y);

	float area = calcularAreaRetang(20.0, 10.0);

	printf("a area eh %f", area);
	
	return 0;
}

float calcularAreaRetang(float base, float altura)
{

	float area = base * altura;

	return area;
}
