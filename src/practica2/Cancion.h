#ifndef CANCION_H
#include <stdio.h>
#include <stdlib.h>
#include <iostring.h>
#include <string.h>

#define MAXCADENA 20

typedef struct 
{
    char nombre[MAXCADENA];
    char autor[MAXCADENA];
    short int release_date;
}Cancion;


#endif