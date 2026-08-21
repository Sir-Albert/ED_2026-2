#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Lista.h>

int compararInt(void*,void*);
int compararChar(void*,void*);
int compararCadena(void*,void*);
void imprimirInt(void*);
void imprimirCadena(void*);


int main(void)
{	
	int arreglo[5] = {9,7,5,3,1};
	int aux[5] = {10,8,6,4,2};
	Lista lista  = inicializarLista();	
	for(int i = 0; i<5 ; i++)
		insertarFinal( &lista , &arreglo[i] );
	
	imprimirLista(lista,imprimirInt);	
	ordenarLista(&lista,compararInt,ASCENDENTE);
	imprimirLista(lista,imprimirInt);
	ordenarLista(&lista,compararInt,DESCENDENTE);
	imprimirLista(lista,imprimirInt);
	ordenarLista(&lista,compararInt,ASCENDENTE);	
	imprimirLista(lista,imprimirInt);
	
	for(int i = 0; i<5 ; i++)
		insertarFinal( &lista , &aux[i] );
	
	imprimirLista(lista,imprimirInt);	
	ordenarLista(&lista,compararInt,ASCENDENTE);
	imprimirLista(lista,imprimirInt);
	ordenarLista(&lista,compararInt,DESCENDENTE);
	imprimirLista(lista,imprimirInt);
	ordenarLista(&lista,compararInt,ASCENDENTE);	
	imprimirLista(lista,imprimirInt);
	
	printf("\n\n FIN DE PROGRAMA :)\n");
	return 0;
}

int compararInt(void* pa,void* pb)
{
	int a = *(int*)pa;
	int b = *(int*)pb;
	if( a>b) return 1;
	else if(a<b) return -1;
	else return 0;
}


int compararChar(void* a,void* b)
{
	return strcmp((char*)a,(char*)b);
}

void imprimirInt(void *dato)
{
	printf("%d", *(int*)dato);
}

void imprimirCadena(void *dato)
{	
	printf("%s", (char*)dato);
}


int compararCadena(void *a,void *b)
{
	return strcmp(a,b);
}

