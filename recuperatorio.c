#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct list{
	struct list *next;
	char dato;
} *t_list;

typedef struct list lista;

void list_initialize(t_list *l){
	*l=NULL;
}

char list_add(t_list *l, char c){
	lista *nodo= malloc(sizeof(lista));
	nodo->next=NULL;
	nodo->dato=c;
	if(*l==NULL) *l=nodo; 
	else{
		lista *actual= *l;
		while(actual->next != NULL){
			actual=actual->next;
		}
		actual->next=nodo;
	}
	
	return c;
}

void list_print(t_list l){
	lista *aux=l;
	while(aux){
		if(isalpha(aux->dato)){
			printf("%c\n", aux->dato);
		}
		aux=aux->next;
	}
}

int main(){
	t_list l;
	list_initialize(&l);
	char c;
	while((c=getchar()) != EOF){
		list_add(&l,c);
	}
	list_print(l);
	return 0;
}
