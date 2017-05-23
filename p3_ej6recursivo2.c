#include <stdio.h>
#include <stdlib.h>

void imprime_recursivo_inverso(char *string){
	if( *string !='\0') {
		imprime_recursivo_inverso(string +1);
		putchar(*string);
	}
}

int main(){
	char *string= malloc(20* sizeof(char));
	if (string != NULL){
		printf("Ingrese una palabra: \n");
		scanf("%s", string);
		imprime_recursivo_inverso(string);
		free(string);
	}else fprintf(stderr, "No se pudo reservar memoria, string= NULL" );
	return 0;
}
