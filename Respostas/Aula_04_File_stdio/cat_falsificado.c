#include <stdio.h>
#include <stdlib.h>
#include "bib_arqs.h"

void leia_string(char *s);

int main(int argc, char **argv){
    char conteudo[10000];

    system("clear");
    
    if(argc < 2){
        fprintf(stderr, " --------------------------------\n");
        fprintf(stderr, "| Insira um argumento de entrada |\n");
        fprintf(stderr, "| na chamada deste programa.     |\n");
        fprintf(stderr, "| Por exemplo:                   |\n");
        fprintf(stderr, "|   $ ./cat_falsificado teste.txt|\n");
        fprintf(stderr, " --------------------------------\n");
        return -1;
    }

    le_arq_texto(argv[1], conteudo);

    fprintf(stdout,"%s", conteudo);

    return 0;
}


void leia_string(char *s) {
	int c, i;
	c = getchar();
	
	if (c =='\n') c =getchar();
    
    i = 0;
	while (c!='\n') {
		s[i] = c;
		c = getchar();
		i++;
	}
	
	s[i] = '\0';
}
