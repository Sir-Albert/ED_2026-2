#ifndef ARBOL_H
#define ARBOL_H

#include <stdio.h>
#include <stdlib.h>
#include <Nodo.h>
#include <Pila.h>

typedef struct
{
	Nodoa *raiz;
	size_t cant;	
}Arbol;

size_t altura(Arbol);
size_t alturaI(Arbol);



#endif