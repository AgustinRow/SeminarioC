#include <stdio.h>
#include <stdlib.h>

int genera_arreglo(int array []){
	int i=0;
	scanf("%d", &array[i]);
	while( array [i] != -1){
		i++;
		printf("introduzca un valor, si desea terminar ingrese -1: ");
		scanf("%d", &array[i]);
	}
	return i;
}

void ordenar_arreglo(int cant, int a []){
	int pasada, j, almacena;	
	for (pasada = 1; pasada < cant; pasada++){
		for (j=0; j<cant-1; j++){
			if ( a[j] > a[j + 1] ){
				almacena = a[j];
				a[j] = a[j + 1];
				a[j + 1] = almacena; 
			}
		}
	}
}

void imprimir_arreglo(int array[], int cant){
	int i;
	for(i=0; i< cant; i++)	printf("%d\n", array [i]);
}
int main(){
	int i=0;
	int *array= malloc(1024);
	printf("Ingrese digitos digitos separados por enter, cuando desee terminar press -1\n");
	i= genera_arreglo(array);
	ordenar_arreglo(i, array);
	imprimir_arreglo(array, i);
}	
