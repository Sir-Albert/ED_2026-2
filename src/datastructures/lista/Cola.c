#include "Cola.h"

Cola *crearCola(void)
{
	return (Cola*)calloc(1,sizeof(Cola));
}

Cola inicializarCola(void)
{
	return (Cola){.inicio=NULL,.fin=NULL,.cant=0};
}

void enqueue(Cola *cola,void *dato)
{
	
}

void enqueueN(Cola *cola,Nodo* nodo)
{
	
}

void* dequeue(Cola *cola)
{
	Nodo *aux = NULL;
	return aux;	
}

Nodo* dequeueN(Cola *cola)
{
	Nodo *aux = NULL;
	return aux;
}

void imprimirCola(Cola cola,fn_imprimir imprimir)
{
	
}

void eliminarCola(Cola *cola,fn_free liberar)
{
	
}

int buscarDatoCola(Cola cola,void *dato,fn_comparar comparar)
{
	return 0;
}