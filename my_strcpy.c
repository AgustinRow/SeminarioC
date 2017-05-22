#include <stdio.h>
#include "my_stdlib.h"

char * my_strcpy(char *dst, const char *src) {
  char *aux = dst;
  while ((*dst++ = *src++));
  return aux;
}
