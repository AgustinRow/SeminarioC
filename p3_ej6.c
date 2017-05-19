#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int imprimir_sentido_inverso(char *str, int longitud){
  for(;longitud>=0; longitud--){
    printf("%c", str[longitud]);
  }
  printf("\n");
  return 0;
}

int main(){
  char *str= malloc(10);
  printf("Ingrese una palabra:" );
  scanf("%s", str );
  imprimir_sentido_inverso(str, strlen(str));
}
