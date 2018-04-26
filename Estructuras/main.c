#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "localidad.h"
#include "string.h"
#define   TAMANIO

/*
 estructura en .h
 el nombre del archivo indica que estructura es.
 */

int main()
{
    //miEstructura;
    //printf("%s", miEstructura.nombre);

    eLocalidad listadoDeLocalidades[TAMANIO];
    for(int i=0; i<TAMANIO; i++)
    {
        listadoDeLocalidades[i].id= i*3
        listadoDeLocalidades[i].estado=1;
        strcpy(listadoDeLocalidades[i],nombreLocalidad"maria")

    }

    loc_mostrarUno(nuevaLocalidad);
    eLocalidad nuevalocalid;
    nuevaLocalidad.estado=1;
    nuevaLocalidad.id=555
    printf("%s", nuevaLocalidad.nombre)
    strcpy(localidad.nombreLocalidad, "maria")
    return 0;

}
