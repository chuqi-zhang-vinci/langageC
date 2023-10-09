#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, nbp = 0, nbn = 0;
	printf("Veuillez entrer un nombre : ");
	scanf("%d", &n);
	int* tabPos = (int*) malloc (n*sizeof(int));
	int* tabNeg = (int*) malloc (n*sizeof(int));

	for (int i = 0; i < n; i++){
		int y;
		scanf("%d", &y);
		if(y >= 0){
			tabPos[nbp] = y;
			nbp++;
		}
		else{
			tabNeg[nbn] = y;
			nbn++;
		}
	};

	for(int i=0; i< nbp; i++){
		printf("%d\t", tabPos[i]);
	};
	printf("\n");

	for (int i = 0; i < nbn; ++i)
	{
		printf("%d\t", tabNeg[i]);
	};
	printf("\n");

	free(tabPos);
	free(tabNeg);
	exit(0);
}
