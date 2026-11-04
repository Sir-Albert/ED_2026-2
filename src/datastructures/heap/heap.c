#include "heap.h"

void insertarHeap(Heap *heap,void *dato)
{
	if( heap->cant!= 0)
	{
		//Agregar
		void **aux = NULL;
		while(!aux)
		{
			aux = realloc(heap->datos, (heap->cant+1)*sizeof(void*));
		}
		heap->datos = aux;
	}
	else
	{
		//Crear
		heap->datos = calloc(1,sizeof(void*));
	}
	heap->datos[ heap->cant++] = dato;
	//HEAPIFY
}

void* removerHeap(Heap *heap)
{
	void *dato = NULL;
	if(heap->cant)
	{
		dato = heap->datos[0];
		heap->datos[0] = heap->datos[--heap->cant];		
		heap->datos = realloc(heap->datos, (heap->cant)*sizeof(void*));		
		//HEAPIFY
	}	
	return dato;
}



void imprimirHeap(Heap *heap,fn_imprimir imprimir)
{
	printf("\n HEAP:");
	for(int i=0;i< heap->cant ; i++)
	{
		printf(" ");
		imprimir(heap->datos[i]);
	}
}


void heapmax(Heap *heap)
{
	int *arrNum = calloc((heap->cant/2),sizeof(int));
	Pila pila = inicializarPila(-1);
	for(int i=0;i<heap->cant/2;i++)
	{
		arrNum[i]=i;
		push(&pila,&arrNum[i]);
	}
	
	while(!pilaVacia(pila))
	{
		int padre = *(int*)pop(&pila);
		int mayor = padre;
		int izq = 2*padre+1;
		int dch = 2*padre+2;
		if( dch < heap->cant && heap->comparar(heap->datos[dch],heap->datos[mayor])>0)
			mayor = dch;
		if( heap->comparar(heap->datos[izq],heap->datos[mayor])>0)
			mayor = izq;
		if( mayor!=padre)
		{
			void *aux = heap->datos[padre];
			heap->datos[padre] =  heap->datos[mayor];
			heap->datos[mayor] =  aux;
			if(mayor<heap->cant/2)
				push(&pila,&arrNum[mayor]);
		}
	}
	free(arrNum);
	
	
}