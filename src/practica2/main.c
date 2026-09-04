#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostring.h>
#include <ListaD.h>
#include "Cancion.h"


int main(void)
{
    int option,corre_programa;
	char c;
    corre_programa=1;


    while(corre_programa)
    {
        printf("\n\r");
        printf("\n\r");
        printf("\n\r [0] BUCLE");
        printf("\n\r [1] ANTERIOR");
        printf("\n\r [2] SIGUIENTE");
        printf("\n\r [3] AGREGAR CANCION");
        printf("\n\r [4] MOSTRAR LISTA DE REPRODUCCION");
        printf("\n\r [5] QUITAR CANCION");
        printf("\n\r [6] REINICIAR REPRODUCCION");
        printf("\n\r [7] TERMINAR PROGRAMA");

        printf("\n\r Escoge opcion: ");
        scanf("%d",&option);
		while( (c=getchar())!='\n' && c!=EOF);
		switch(option)
        {
        case 0:
                //CAMBIA EL COMPORTAMIENTO DE LA COLA
                //SI NO ERA COLA CIRCULAR, LA HACE CIRCULAR
                //SI ERA COLA CIRCULAR, LA DESHACE
                break;
        case 1:
                //ACTUALIZA EL APUNTADOR DE LA ELEMENTO ACTUAL EN REPRODUCCION AL ANTERIOR
                break;
        case 2:
                //ACTUALIZA EL APUNTADOR DE LA ELEMENTO ACTUAL EN REPRODUCCION AL SIGUIENTE
                break;
        case 3:
                //SE MUESTRA UN MENU CON LAS CANCIONES DISPONIBLES
                //SE SELECCIONA LA CANCION
                //SE MUESTRA LA COLA DE REPRODUCCION
                //SE SELECCIONA EN QUE POSICION DE LA COLA SE AGREGARA
                //SE AGREGA LA CANCION A LA COLA RESPETANDO FIFO DE LA COLA DE REPRODUCCION
                break;
        case 4:
                //SE MUESTRA LA COLA DE REPRODUCCION RESPETANDO FIFO
                break;
        case 5:
                //SE MUESTRA UN MENU CON LAS CANCIONES DE LA COLA DE REPRODUCCION RESPETANDO FIFO
                //SE SELECCIONA UNA OPCION Y SE ELIMINA, RESPETANDO FIFO
                break;
        case 6:
                //LA POSICION ACTUAL CAMBIA AL INICIO DE LA COLA DE REPRODUCCION
                break;
        case 7:
                corre_programa=0;
                break;
        default:
                break;
        }
    }
    printf("\n FIN DE PROGRAMA \n\r");
    return 0;
}