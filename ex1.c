#include <stdio.h>
#include <stdlib.h>

#define TAILLE 50

int main(){
	double tab[TAILLE] = {0};
	int x;
	int val = 0;

	printf("Entrez les notes ds etudiants, Ctrl-D pour terminer :\n");
	
	while (scanf("%d", &x) != EOF && val < TAILLE){
		tab[val] = x;
		//scanf("%lf", &x);
		val++;
	};
	printf("OK\n");
	double somme;
	double res;
	double moyenne;
	for(int i= 0; i<val; i++){
		somme += tab[i];
	};
	moyenne = somme / val;
	printf("moyenne : %lf", moyenne);
	printf("Ecarts des etudiants par rapport a la moyenne : \n");

	for(int i= 0; i<val; i++){
		res = moyenne - tab[i];
		printf("Etudiant %d : %lf - %lf = %lf \n", (i+1), tab[i], moyenne, res);
	};

}