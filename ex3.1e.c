#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	double x, resultat = 1, y = 1;
	printf("nombre max : %d\n", INT_MAX);
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
	
	while(y <= x){
		if(((long)resultat * (long)y) >= INT_MAX){
			printf("erreur\n");
			return 1;
		}
		resultat *= y;
		y++;
	}

	printf("%lf\n", resultat);
	return 0;
}