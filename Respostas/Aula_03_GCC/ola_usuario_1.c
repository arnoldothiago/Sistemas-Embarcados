#include<stdio.h>

void leia_string(char *s);

int main(){
	char nome[200];

	fprintf(stdout,"Digite o seu nome: ");
	leia_string(nome);
	
	fprintf(stdout, "Ola %s\n", nome);
	
	return 0;
}

void leia_string(char *s) {
	int c, i;
	c = getchar();
	
	if (c =='\n') {
		c =getchar();
	}
	i = 0;
	
	while (c!='\n') {
		s[i] = c;
		c = getchar();
		i++;
	}
	
	s[i] = '\0';
}
