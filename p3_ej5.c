#include <stdio.h>
#include <stdlib.h>
/*¿como hago para corrobar la cantidad de elementos de uno sea la misma que el otro,
para el caso que sean de distinto tamaño?*/

void suma(int arr1[], int arr2[],int arr3[], int cant_elementos){
	int i;
	for(i=0; i<cant_elementos; i++){
		arr3[i]= arr1[i]+arr2[i];
	}
}

void imprimir_arreglo(int array[], int cant){
	int i;
	for(i=0; i< cant; i++)	printf("%d\n", array [i]);
}

int main(){
	int arr1[]= {10,2,3,5,12,65};
	int arr2[]= {54,4,2,89,2,3};
	int cant_elementos= 6;
	int arr3[6];
	suma(arr1, arr2, arr3, cant_elementos);
	imprimir_arreglo(arr3, cant_elementos);	
	return 0;
}
