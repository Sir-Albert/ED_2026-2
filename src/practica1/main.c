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
	int arreglo[5] = {1,2,3,4,5};
	char *palabras[5] = {"Hola","Pepe","Computadora","Palabra","Palacios"};
	Lista lista,listaB;
	listaB.inicio = lista.inicio = NULL;
	listaB.fin =lista.fin = NULL;
	listaB.cant = lista.cant = 0;
	int dato = 6;
	int res;
	for(int i = 0; i<5 ; i++)
	{
		insertarFinal( &lista , &arreglo[i] );
		insertarFinal( &listaB , palabras[i] );
	}
	imprimirLista(lista,imprimirInt);
	imprimirLista(listaB,imprimirCadena);	
	res =  buscarDato(listaB,"Palacios",compararCadena);
	printf("\n %s %s en la listaB","Palacios", (res)? "existe":"no existe");
	res =  buscarDato(listaB,"Jeronimo",compararCadena);
	printf("\n %s %s en la listaB","Jeronimo", (res)? "existe":"no existe");
	insertarFinal(&listaB,"Alberto");
	eliminarDato(&listaB,"Palabra",compararCadena);
	imprimirLista(listaB,imprimirCadena);	
	eliminarDato(&listaB,"Hola",compararCadena);
	imprimirLista(listaB,imprimirCadena);	
	eliminarDato(&listaB,"Alberto",compararCadena);
	imprimirLista(listaB,imprimirCadena);	
	
	
	res =  buscarDato(lista,&dato,compararInt);	
	res =  buscarDato(lista,&dato,compararChar);
	printf("\n %d %s en la lista",dato, (res)? "existe":"no existe");
	dato = 2;	
	res =  buscarDato(lista,&dato,compararInt);
	printf("\n %d %s en la lista",dato, (res)? "existe":"no existe");	
	eliminarLista(&lista);
	imprimirLista(lista,imprimirInt);	
	res =  buscarDato(lista,&dato,compararInt);
	printf("\n %d %s en la lista",dato, (res)? "existe":"no existe");
	
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

