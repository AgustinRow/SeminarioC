#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *dar_vuelta_palabra(char *dest, const char * str){
	int len= ((int) strlen(str)-1);
	for(;len>=0; len--){
		*dest=str[len];
		dest++;
	}
	*dest= '\0';
	return dest;
}



int es_palindromo(const char *word){
	char *aux= malloc(sizeof(char)*20);
	if(strlen(word)>1){
		 
		dar_vuelta_palabra(aux, word);
}
	return strcmp(aux,word);
}


int contar_palindromos(char *cadena){
	char aux[50];
	int i;
	char contador=0;
	while(*cadena != '\0'){
		i=0;
		while((*cadena != ' ') && (*cadena != '\0')) {
			printf("%c\n", *cadena);
			aux[i]= *cadena;
			++cadena;
			++i;
		}
		aux[i]='\0';
		printf("longitud de aux: %d\n",(int) strlen(aux));
		printf("aux: %s\n", aux);
		if ((es_palindromo(aux)==0) && (strlen(aux)!=0)) contador++;
		++cadena; 
	}
	return contador;
}

int main(){
	char *str="abba     menem gato y macri tambien es gato neuquen";
	printf("la cantidad de palabras capicual en mi string es de: %d\n", contar_palindromos(str));
	return 0;
}
