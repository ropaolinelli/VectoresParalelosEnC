#include <stdio.h>
#include <stdlib.h>
#define   TAMANIO 5
#include <string.h>

void mostrarAlumno( char [] [50], int [], int [], float[], int [], int[] );
void cargarAlumno ( char [] [50], int [], int [], float[], int [], int[] );
float sacarPromedio (int, int);
void buscarLugar (int, int[]);


int main()
{
    char nombre [TAMANIO] [50]={"Olivia","Maria","Alfredo","Jose","Lili"};
    int notasUno[TAMANIO]={4, 10, 2, 7, 2};
    int notasDos[TAMANIO]={4, 8, 7, 8, 3};
    float promedios[TAMANIO]={4, 9.5, 4.5, 8.5, 2.5};
    int legajo [TAMANIO]={111, 222, 333, 444, 555};
    int i;
    int j;
    char aux;
    int comparar;

    for(i=0; i<4 ;i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(strcmp(nombre[i],nombre[j])>0)
            {
                strcpy(aux,nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], aux);
                comparar=strcmp(nombre[i],nombre[j]);

            }
        }
    }

    for(i=0; i<5; i++)
    {
        printf("%d\n", comparar);
    }







    mostrarAlumno(nombre, notasUno, notasDos, promedios, legajo, TAMANIO);

    return 0;
}

void mostrarAlumno( char nombres[] [50], int primeraNota[], int segundaNota[], float promedio[], int legajos[], int largo[] )
{
    int i;
    for(i=0; i<largo; i++)

    {
         if(mostrarAlumno!=0)
        {
            printf("\n L: %d, N: %s, N1: %d, N2: %d, P: %.2f", legajos [i], nombres[i], primeraNota[i], segundaNota[i], promedio[i]);
        }
    }

}






