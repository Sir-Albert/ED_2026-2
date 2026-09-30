#include "arbol.h"


size_t altura(Arbol arbol)
{
	Arbol arbol_izq,arbol_dch;
	size_t hd,hi;
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
	if (!arbol.raiz)
		return 0;

	size_t max_altura = 0;
	Pila pila = inicializarPila(-1);
	Nodoa *actual = arbol.raiz;
	Nodoa *ultimo_visitado = NULL;

	while (actual != NULL || !pilaVacia(pila))
	{
		if (actual != NULL)
		{
			//SE RECORREN LOS HIJOS IZQUIERDOS
			// Apilar nodo padre antes del bajar
			push(&pila, actual);
			
			// Actualizar la altura máxima según la profundidad de la pila
			if (pila.cant > max_altura)
				max_altura = pila.cant;
			
			actual = actual->izq;
		}
		else
		{
			//Se consulta el padre
			Nodoa *padre = peek(pila);
			
			// Si existe hijo derecho y aún no lo hemos visitado, recorrer
			if (padre->dch != NULL && ultimo_visitado != padre->dch)
			{
				actual = padre->dch;
			}
			else
			{
				// Remover si ya se recorrieron los hijos
				ultimo_visitado = pop(&pila);
			}
		}
	}

	return max_altura;
}