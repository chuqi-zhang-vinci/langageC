#include <stdlib.h>
#include <stdio.h>

int main(){
	int x, y;
	printf("entrer votre nombre : ");
	scanf("%d", &x);
	if(x > 0){
		for (y=1; y < x+1; y++){
			if(x % y == 0)
				printf("%d\n", y);
		}
	}else{
		printf("nombre invalide\n");
	}
	return 0;
}