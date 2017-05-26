#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*char *dar_vuelta(char *dest, const char * str){
	while(*str !='\0'){
		dar_vuelta(dest,str+1);
		*dest++= *str;
	}
}*/

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
	if(strlen(word)>1) dar_vuelta_palabra(aux, word);
	return strcmp(aux,word);
}

int main(int argc, char * argv[]){
	if(es_palindromo(argv[1])){
		printf("%s no es palindromo\n", argv[1]);
	}
	else printf("%s es palindromo\n", argv[1]);
	return 0;
}
