#include <stdlib.h>
#include <stdio.h>

int main() {
	int x,y,z;
	printf("la valeur de x : ");
	scanf("%d", &x);
	printf("la valeur de y : ");
	scanf("%d", &y);
	z = x;
	x = y;
	y = z;
	printf("la valeur de x : %d\n", x);
	printf("la valeur de y : %d\n", y);
	exit(0);
}