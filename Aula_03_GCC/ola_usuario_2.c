#include<stdio.h>

int main(int argc, char **argv){
	char *nome;
	
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
	
	nome = argv[1];
	
	fprintf(stdout,"Ola %s\n", nome);
	
	return 0;
}
