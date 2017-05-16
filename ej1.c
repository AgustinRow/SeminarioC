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
	printf("%d", *s);

}
		
int main(int argc, char argv []){
	char s[20];
	int i, b;
	i= argv[1];	
	b= argv[2];
	convertir(i,s,b);
	return 0;
}
