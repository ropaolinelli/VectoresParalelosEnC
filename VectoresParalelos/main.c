#include <stdio.h>
#include <stdlib.h>
#define   TAMANIO 5

void mostrarAlumno( char [] [50], int [], int [], float[], int [], int[] );
int main()
{
    char nombre [TAMANIO] [50]={"Juan","Maria","Alfredo","Jose","Lili"};
    int notasUno[TAMANIO]={};
    int notasDos[TAMANIO]={};
    float promedios[TAMANIO]={};
    int legajo [TAMANIO]={};

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
