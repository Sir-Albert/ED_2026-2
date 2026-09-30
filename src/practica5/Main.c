#include <stdio.h>
#include <stdlib.h>
#include <iostring.h>
#include <arbol.h>
#include <Nodo.h>



int main(void)
{
	Nodoa *raiz = crearNodoa(NULL);
	raiz->izq = crearNodoa(NULL);
	raiz->izq->izq = crearNodoa(NULL);
	raiz->dch =  crearNodoa(NULL);	
	raiz->dch->izq =  crearNodoa(NULL);
	raiz->dch->izq->dch =  crearNodoa(NULL);
	raiz->dch->izq->dch->izq =  crearNodoa(NULL);
	raiz->dch->izq->dch->izq->izq  =  crearNodoa(NULL);
	Arbol arbol;
	arbol.raiz = raiz;
	printf("\n Altura %d", altura(arbol));
	printf("\n Altura %d", alturaI(arbol));
    printf("\n\n FIN DE PROGRAMA\n\n");
    return 0;
}

