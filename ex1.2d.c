#include <stdlib.h>
#include <stdio.h>

int main(){
	int x;
	x = 65;
	for (x; x < 91; x++) {
		printf("Caractère = '%c'\t", x);
		printf("code déc. = %d\t", x);
		printf("code hexa. = %x\n", x);	
	}
	int y;
	y = 49;
	for (y; y < 58; y++) {
		printf("Caractère = '%c'\t", y);
		printf("code déc. = %d\t", y);
		printf("code hexa. = %x\n", y);	
	}
	
}