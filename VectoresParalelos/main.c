#include <stdio.h>
#include <stdlib.h>
#define   TAMANIO 5

void mostrarAlumno( char [] [50], int [], int [], float[], int [], int[] );
void cargarAlumno ( char [] [50], int [], int [], float[], int [], int[] );
void buscarLugar (int, int[TAMANIO]);

int main()
{
    char nombre [TAMANIO] [50]={"Juan","Maria","Alfredo","Jose","Lili"};
    int notasUno[TAMANIO]={};
    int notasDos[TAMANIO]={};
    float promedios[TAMANIO]={};
    int legajo [TAMANIO]={};

    cargarAlumno(nombre, notasUno, notasDos, promedios, legajo, TAMANIO);
    mostrarAlumno(nombre, notasUno, notasDos, promedios, legajo, TAMANIO);
    cargarAlumno(nombre, notasUno, notasDos, promedios, legajo, TAMANIO);
    mostrarAlumno(nombre, notasUno, notasDos, promedios, legajo, TAMANIO);

    return 0;
}

void mostrarAlumno(char nombre [] [50], int primeraNota [], int segundaNota [], float promedio [], int legajos [], int largo [])
{
    int i;
    for(i=0; i<largo; i++)
    {
        printf("\n L: %d, N: %s, N1: %d, N2: %d, P: %.2f", legajos [i], nombre[i], primeraNota[i], segundaNota[i], promedio[i]);
    }
}

void cargarAlumno(char nombre [] [50], int primeraNota [], int segundaNota [], float promedio [], int legajos [], int largo [])
{
    int indice;
    indice=buscarLugar (legajos, largo);
    legajos[indice]=666;

}

void buscarLugar (int legajo, int largo)
{
    int i;
    int indiceRetornado= -1;
    for(i=0; i<TAMANIO;i++)
    {
        if(lejajo[i]==0)
        {
            indiceRetornado=i;
            break;
        }

    }
    return indiceRetornado;
}

