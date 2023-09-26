#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	int x, resultat = 1;
	printf("nombre max : %d\n", INT_MAX);
	printf("Veuillez entrer un nombre : ");
	scanf("%d", &x);
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

		if(((long)resultat * (long)i) >= INT_MAX){
			printf("erreur\n");
			return 1;
		}
		resultat *= i;
	}

	printf("%d\n", resultat);
	return 0;
}