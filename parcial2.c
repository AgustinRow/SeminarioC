// main.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * concatenar(const char *a, const char *b, int flag) {
	char *aux= malloc(sizeof(char)*(strlen(a)+strlen(b)));	
	if(flag == 0){
		strcpy(aux,a);
		strcat(aux,b);
	}else if(flag == 1){	
		strcpy(aux,b);
		strcat(aux,a);
		}
	return aux;
}

void invertir(char *s, int flag) {
	int aux = (int) strlen (s);
	char b; int i;
	for (i=0; i<aux; i++){
		b = s[i];
		s[i] = s[aux - 1];
		s[aux-1] = b;
		--aux;
	} 
}

int main(int argc, char *argv[]) {
	char *s;	
	if ((argc == 4) || (argc == 5)){
		if(argv[1][0] == '-') && ((argv[1][1] == '1') || (argv[1][1] == '0')){	//corrobora que este bien escrito el argumento ej: -0 o -1	
			s = concatenar(argv[2], argv[3], ((argv[1][1])-48));
			if (argc == 5 && argv[4][1] == 'i'){
				invertir(s, 0);
			}
			printf ("%s\n", s);
			free(s);
			return 0;
		}else return 2;	
	}
	else return 2;
}
