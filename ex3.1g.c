#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x, resultat = 1;
	printf("Veuillez entrer un nombre : ");
	scanf("%d", &x);
	while ((x = getchar()) != EOF){
		
		for (int i = 1; i < x+1; i++)
		{
			resultat *= i;
			printf("%d\n", resultat);
		}
		scanf("%d", &x);
	}
	return 0;
}