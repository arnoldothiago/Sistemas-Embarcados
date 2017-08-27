#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados{
    char nome[200];
    int idade;
};

int main(int argc, char **argv){
    struct dados Dados;
    char aux[200], *temp;
    FILE *arquivo;

    system("clear");

    if(argc < 2){
		fprintf(stderr, " --------------------------------\n");
		fprintf(stderr, "| Insira um argumento de entrada |\n");
		fprintf(stderr, "| na chamada deste programa.     |\n");
		fprintf(stderr, "| Por exemplo:                   |\n");
		fprintf(stderr, "|    $ ./ola_usuario_2           |\n");
		fprintf(stderr, " --------------------------------\n");
		return -1;
	}

    strcpy(Dados.nome, argv[1]);

    temp = argv[2];
    Dados.idade = atoi(temp);

    fprintf(stdout, "Nome: %s\n", Dados.nome);
    fprintf(stdout, "Idade: %d anos\n", Dados.idade);
    
    memmove(aux, aux, 0);
    strcpy(aux, Dados.nome);
    strcat(aux, ".txt");

    arquivo = fopen(aux,"w");

    fprintf(arquivo, "Nome: %s\n", Dados.nome);
    fprintf(arquivo, "Idade: %d anos\n", Dados.idade);

    fclose(arquivo);

    return 0;
}
