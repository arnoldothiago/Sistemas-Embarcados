#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bib_arqs.h"

int main(int argc, char **argv){
    int i=0;
    char frase[10];
    FILE *fp;

    system("clear");
    
    if(argc < 3){
        fprintf(stderr, " ----------------------------------\n");
        fprintf(stderr, "| Insira um argumento de entrada   |\n");
        fprintf(stderr, "| na chamada deste programa.       |\n");
        fprintf(stderr, "| Por exemplo:                     |\n");
        fprintf(stderr, "|   $ ./busca_e_conta ola ola.txt  |\n");
        fprintf(stderr, " ----------------------------------\n");
        return -1;
    }

    fp = fopen(argv[2],"r");

    while (!feof(fp)){
        fscanf(fp, "%s", frase);
        if (!strcmp(frase, argv[1])) i++;
    }

    fprintf(stdout,"'%s' ocorre %d vezes no arquivo '%s'.\n",argv[1],i,argv[2]);

    fclose(fp);

    return 0;
}