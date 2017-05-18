#include <stdlib.h>
#include <stdio.h>

void convertir (int i, char s [], int b){
	char arr[]= "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int  modulo,aux=0 , posicion=0;
	char swap[10];
	while (i!=0){
		modulo=i%b;
		swap[posicion]= arr[modulo];
		posicion++;
		i/=b;
	}
	while (posicion >= 0){
		s[aux]= swap [posicion];
		aux++;
		posicion--;
	}
	s[aux]= '\0';

}
		
int main(int argc, char **argv){
	char s= malloc (1024);
	convertir((atoi(argv[1])),s,(atoi(argv[2])));
	printf("result:%s \n", s);
	return 0;
}
