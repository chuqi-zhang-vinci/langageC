#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char **str;
	str = (char**) malloc((argc-1) * sizeof(char*));
	if(str == NULL) exit(1);

	for (int i = 0; i < (argc-1); i++){
			str[i] = (char*) malloc((strlen(argv[i])) * sizeof(char));
			if(str[i] == NULL) exit(1);
	}	

	if(argc > 1) {
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; j < strlen(argv[i]) && argv[i][j] != '\0'; j++)
			{
				str[i-1][j] = toupper(argv[i][j]);
			}
		}
	}else {
		printf("Aucun argument fourni\n");
	}

	for (int i = 0; i < argc-1; i++)
	{
		printf("%s ", str[i]);	
	}

	

	return 0;
}