#include <stdio.h>
#include <stdlib.h>

int menor (char arr [], int tam, int i){
	int dato=arr[i];
	while (i< tam-1){
		i++;
		if(dato < arr[i])
			dato= arr[i];
	}
	return i;
}

void ordenar (char arr[], int cant){
	int i,temp, pos_men;
	for(i=0; i<cant; i++){
		pos_men = menor (arr, cant, i);
		temp= arr [i];
		arr [i]= arr [pos_men];
		arr [pos_men]= temp;
	}
}

int main(int argc, char * argv[]){
	char arr[10]= {10,2,35,1,0,85,95,23,5,11};
	printf("arreglo sin ordenar: %s \n", arr);
	ordenar(arr, 10);
	printf("arreglo ordenado: %s \n", arr);
}
