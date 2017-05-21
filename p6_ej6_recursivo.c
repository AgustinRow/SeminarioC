#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int imprime_recursivo_inverso(char * string, int longitud){
	if (longitud == 0){
		printf("%c\n", string[longitud]);
		return 0;	
	}
	else {
		printf("%c", string[longitud]);
		imprime_recursivo_inverso(string, (--longitud));
		return 0;
	}
}

int main(){
	  char *str= malloc(10);
	  printf("Ingrese una palabra:" );
	  scanf("%s", str );
	  printf("Longitud del caracter %d\n",strlen(str));
	  imprime_recursivo_inverso(str, strlen(str));
	  return 0;
}
