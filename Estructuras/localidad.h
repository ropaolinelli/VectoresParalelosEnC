#ifndef LOCALIDAD_H_INCLUDED
#define LOCALIDAD_H_INCLUDED

typedef struct
{
    int id;
    int estado;
    char nombreLocalidad[50];
}eLocalidad;

void loc_mostrarListado(eLocalidad listado[]);
#endif // LOCALIDAD_H_INCLUDED
