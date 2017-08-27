#include <stdio.h>
#include <stdlib.h>

int tam_arq_texto(char *argv){
    int fsk = 0;
    FILE *arquivo;
    
    if(argv == NULL){
        fprintf(stderr, " --------------------------------\n");
        fprintf(stderr, "| Insira um argumento de entrada |\n");
        fprintf(stderr, "| na chamada deste programa.     |\n");
        fprintf(stderr, "| Por exemplo:                   |\n");
        fprintf(stderr, "|    $ tam_arq_texto(arqivo.txt) |\n");
        fprintf(stderr, " --------------------------------\n");
        return -1;
    }

    arquivo = fopen(argv,"r");

    while(fseek(arquivo,-fsk,SEEK_END) == 0) fsk++;
    
    fsk--;

    return fsk;
}

void le_arq_texto(char *nome_arquivo, char *conteudo){
    int i=0;
    char c;
    FILE *arquivo;

    arquivo = fopen(nome_arquivo,"r");


    while((c = getc(arquivo) ) != EOF){
        conteudo[i] = c;
        i++;
    }

    fclose(arquivo);
}