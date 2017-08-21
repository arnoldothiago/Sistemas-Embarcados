#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
	char *nome;
	int i = 0, count = 0;
	
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
		
	while(1){
		if(argv[i] != NULL) count++;
		else break;
		i++;
	}
	
	nome = argv[1];
	fprintf(stdout,"Ola %s\n", nome);	
	fprintf(stdout,"Numero de entradas = %d\n",count);
	

	return 0;
}
