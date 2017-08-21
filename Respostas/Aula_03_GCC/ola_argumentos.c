#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int i = 1;
	
	if(argc<2){
		fprintf(stderr, " --------------------------------\n");
		fprintf(stderr, "| Insira um argumento de entrada |\n");
		fprintf(stderr, "| na chamada deste programa.     |\n");
		fprintf(stderr, "| Por exemplo:                   |\n");
		fprintf(stderr, "|    $ ./ola_usuario_2 Arnoldo   |\n");
		fprintf(stderr, "|         Ola Arnoldo            |\n");
		fprintf(stderr, "|    $                           |\n");
		fprintf(stderr, " --------------------------------\n");
		return -1;
	}
		
	fprintf(stdout,"Argumentos: ");
		
	while(1){
		if(argv[i] != NULL){
			fprintf(stdout,"%s ", argv[i]);
		}
		else break;
		i++;
	}

	fprintf(stdout,"\n");

	return 0;
}
