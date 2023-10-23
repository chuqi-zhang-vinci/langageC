#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	int hauteur, largeur;
	printf("Veuillez entrer la hauteur : ");
	scanf("%d", &hauteur);
	printf("Veuillez entrer la largeur : ");
	scanf("%d", &largeur);
	printf("\n");


	char **m;
	m = (char**) malloc (hauteur * sizeof(char*));
	if(m == NULL) exit(1);
	for (int i = 0; i < hauteur; i++)
	{
		m[i] = (char*) malloc(largeur * sizeof(char));
			for (int j = 0; j < largeur; j++){
				m[i][j] = '.';
			}
		if(m[i] == NULL) exit(1);
	}


	printf("vous etes ici \n");
	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j < largeur; j++)
		{
			printf("%c  ", m[i][j]);
		}
		printf("\n");
	}


	int colonneX = hauteur, colonneO = hauteur;
	bool tourAX = true;
	int compteurLigneX = hauteur-1;
	int compteurLigneO = hauteur-1;
		
	while(colonneX != 0 && colonneO != 0) {	
		printf("je suis ici : ");
		printf("%d\n", tourAX);


		printf("%d \n", compteurLigneX);
		printf("%d \n", colonneX);
		if(tourAX == true){
			printf("la colonne où va jouer le joueur X : ");
			scanf("%d", &colonneX);
			if(colonneX == 0) break;
			colonneX -= 1;
			if(m[compteurLigneX][colonneX] == '.'){
				m[compteurLigneX][colonneX] = 'X';
				compteurLigneX--;
			}
			else{
				compteurLigneX--;
				m[compteurLigneX][colonneX] = 'X';
			}
			tourAX = false;
		}




		printf("Affichage du tableau : \n");
		for (int i = 0; i < hauteur; i++){
			for (int j = 0; j < largeur; j++){
				printf("%c  ", m[i][j]);
			}
			printf("\n");
		}
		
		if(tourAX == false){
			printf("la colonne où va jouer le joueur O : ");
			scanf("%d", &colonneO);	
			if(colonneO == 0) break;
			colonneO -= 1;
			if(m[compteurLigneO][colonneO] == '.'){
			m[compteurLigneO][colonneO] = 'O';
			compteurLigneO--;
			}
			else{
				compteurLigneO--;
				m[compteurLigneO][colonneO] = 'O';
			}
			tourAX = true;
		}
		
		printf("Affichage du tableau : \n");
		for (int i = 0; i < hauteur; i++){
			for (int j = 0; j < largeur; j++){
				printf("%c  ", m[i][j]);
			}
			printf("\n");
		}

	}

	for (int i = 0; i < hauteur; i++){
			free(m[i]);
		}
		free(m);
	return 0;
}
