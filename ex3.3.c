#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	double x, resultat = 1;
	printf("Veuillez entrer un nombre : ");
	scanf("%lf", &x);
	if(x == 0){
		printf("1\n");
		return 0;
	}
	if(x < 0){
		printf("nombre incorrect\n");
		return 1;
	}
	for (int i = 1; i <= x; i++)
	{
		resultat *= i;
	}
	printf("%lf\n", resultat);
	return 0;
}