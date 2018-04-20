#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define   TAMANIO 5

void mostrarAlumno( char [] [50], int [], int [], float[], int [], int[] );
void cargarAlumno ( char [] [50], int [], int [], float[], int [], int[] );
float sacarPromedio (int, int);
void buscarInt (int, int[], int);


int main()
{
    char nombre [TAMANIO] [50]={"olivia","maria","alfredo","jose","lili"};
    int notasUno[TAMANIO]={4, 10, 2, 7, 2};
    int notasDos[TAMANIO]={4, 8, 7, 8, 3};
    float promedios[TAMANIO]={4, 9.5, 4.5, 8.5, 2.5};
    int legajo [TAMANIO]={111, 222, 333, 444, 555};
    int i;
    int j;
    char aux[30];
    int comparar;
    int auxInt;
    float auxFloat;
    int auxLeg;


    for(i=0; i<TAMANIO ;i++)
    {
        for(j=i+1; j<TAMANIO; j++)
        {
            if(strcmp(nombre[i],nombre[j])>0)
            {
                strcpy(aux,nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], aux);

                auxInt= notasUno[i];
                notasUno[i]=notasUno[j];
                notasUno[j]=auxInt;

                auxInt= notasDos[i];
                notasDos[i]=notasDos[j];
                notasDos[j]=auxInt;

                auxFloat= promedios[i];
                promedios[i]=promedios[j];
                promedios[j]=auxFloat;

                auxLeg=legajo[i];
                legajo[i]=legajo[j];
                legajo[j]=auxLeg;


                comparar=strcmp(nombre[i],nombre[j]);

            }
        }
    }
    printf("%d\n", comparar);

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

void buscarInt (int largo, int enteros[], int cual)
{
    int indice = -1;
    int i;
    for(i=0; i<largo; i++)
    {
        if(enteros[i]==cual)
        {
            indice=i;
            break;
        }
    }
    return indice;
}






