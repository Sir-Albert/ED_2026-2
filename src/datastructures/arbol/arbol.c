#include "arbol.h"


size_t altura(Arbol arbol)
{
	size_t hd,hi;
	Arbol arbol_izq,arbol_dch;
	if(!arbol.raiz) 
		return 0;
	if(!arbol.raiz->izq && !arbol.raiz->dch)
		return 1;
	arbol_izq.raiz = arbol.raiz->izq;
	arbol_dch.raiz = arbol.raiz->dch;
	hi = altura(arbol_izq);
	hd = altura(arbol_dch);
	if( hi>hd )
		return hi + 1;
	else
		return hd + 1;
}


size_t alturaI(Arbol arbol)
{	
	size_t acum = 0;
	size_t hd,hi;
	Pila pila = inicializarPila(-1);
	
	push(&pila,arbo.raiz);
	
	while(!pilaVacia(pila))
	{
		Nodoa *raiz = peek(pila);
		if(!raiz)
		{
			acum += 0;
			pop(&pila);
		}
		else if(!raiz->izq && !raiz->dch)		
		{			
			acum += 1;
			pop(&pila);
		}		
		push(&pila,raiz->dch);
		push(&pila,raiz->izq);
	}
}