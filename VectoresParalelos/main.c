#include <stdio.h>
#include <stdlib.h>
#define   TAMANIO 5

/*
objetivo principal: ordenamiento de vectores paralelos, sin importar si los datos son hardcodeados
1. hacer el alta
2. hacer la baja (poner todo en 0)
3. modificar todo menos el legajo
*/
void mostrarAlumno( char [] [50], int [], int [], float[], int [], int[] );
void cargarAlumno ( char [] [50], int [], int [], float[], int [], int[] );
void buscarLugar (int, int[TAMANIO]);
float sacarPromedio (int, int);


int main()
{
    char nombre [TAMANIO] [50]={"Rocio","Maria","Alfredo","Jose","Lili"};
    int notasUno[TAMANIO]={4, 10, 2, 7, 2};
    int notasDos[TAMANIO]={4, 8, 7, 8, 3};
    float promedios[TAMANIO]={4, 9.5, 4.5, 8.5, 2.5};
    int legajo [TAMANIO]={111, 222, 333, 444, 555};

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
    if(indice>-1)
    {
        indice=buscarLugar (legajos, largo);
        legajos[indice]=666;
    }
    else
    {

    }

}

 void buscarLugar (int legajos [], int largo)
{
    int i;
    int indiceRetornado= -1;
    for(i=0; i<largo; i++)
    {
        if(lejajos[i]==0)
        {
            indiceRetornado=i;
            break;
        }

    }
    return indiceRetornado;
}

