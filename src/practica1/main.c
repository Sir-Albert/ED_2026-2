#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostring.h>
#include <Lista.h>
#include "alumno.h"

int main(void)
{	
	
	Lista lista  = inicializarLista();
	int i =3;
	while(i--)
	{
		size_t mat = 0;
		printf("\n Captura matricula: ");
		scanf("%u",&mat);
		clear_buffer();
		Alumno *nuevo = crearAlumno(mat);
		insertarFinal(&lista,nuevo);
		imprimirLista(lista,imprimirAlumno);
	}
	eliminarLista(&lista,free);
	printf("\n\n FIN DE PROGRAMA :)\n");
	return 0;
}
