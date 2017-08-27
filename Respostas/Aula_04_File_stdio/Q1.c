#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	fp = fopen("ola_mundo.txt", "w");
	
	if(!fp){
		fprintf(stderr,"Erro ao abrir o arquivo.");
		return 1;
	}
	
	fprintf(fp, "Ola Mundo!\n");
	
	fclose(fp);

	return 0;
}
