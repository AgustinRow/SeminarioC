#include <stdio.h>

char *my_strcpy(char *dest, const char *src){
	char *aux= dest;
	while ((*dest++ = *src ++));
	return aux;
}
