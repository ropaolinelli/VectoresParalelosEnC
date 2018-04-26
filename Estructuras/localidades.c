#include "localidad.h"

void loc_mostrarUno(eLocalidad aux)
{
    printf("\n id: %d nombre: %s",aux.id , aux.nombreLocalidad);
}

void loc_mostrarListado(eLocalidad listado[], int largo)
{
    int i;
    for(i=0; i<largo, i++)
    {
        printf("%s", listado[i].nombreLocalidad);
    }
}
