#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados{
    char nome[200];
    int idade;
};

void leia_string(char *s);

int main(int argc, const char **argv){
    struct dados Dados;
    char aux[200];
    FILE *arquivo;

    system("clear");

    if(argc != 1){
		fprintf(stderr, " --------------------------------\n");
		fprintf(stderr, "| Insira um argumento de entrada |\n");
		fprintf(stderr, "| na chamada deste programa.     |\n");
		fprintf(stderr, "| Por exemplo:                   |\n");
		fprintf(stderr, "|    $ ./ola_usuario_2           |\n");
		fprintf(stderr, " --------------------------------\n");
		return -1;
	}

    fprintf(stdout, "Digite o seu nome: ");
    leia_string(Dados.nome);

    fprintf(stdout, "Digite a sua idade: ");
    leia_string(aux);
    Dados.idade = atoi(aux);
    
    memmove(aux, aux, 0);
    strcpy(aux, Dados.nome);
    strcat(aux, ".txt");

    arquivo = fopen(aux,"w");

    fprintf(arquivo, "Nome: %s\n", Dados.nome);
    fprintf(arquivo, "Idade: %d anos\n", Dados.idade);

    fclose(arquivo);

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
