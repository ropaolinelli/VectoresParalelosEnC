#include <stdio.h>
#include <stdlib.h>
#define TAM 8

int buscarLibre(int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
int cargarAlumno(int[], char[][20], int[], int[], float[], int);

int main()
{
    int legajo[TAM]= {11,12,13,14,15};
    char nombre[TAM][20]={"Rocio","Abril","Sofia","Veronica","Marcelo"};
    int nota1[TAM]={10,8,9,6,8};
    int nota2[TAM]={10,3,6,10,9};
    float promedio[TAM];//{10 ,5.5 ,7.5 ,8 ,8.5};
    int opcion;
    int index;
    int i;
    int j;
    char aux[30];
    int comparar;
    int auxInt;
    float auxFloat;
    int auxLeg;

do
{
        printf("\n1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: \n ");
        scanf("%d", &opcion);

        switch(opcion)
    {
        case 1:

            index=cargarAlumno(legajo, nombre, nota1, nota2, promedio, TAM);
            if(index == -1)
            {
                printf("No hay lugar\n");
            }
            else
            {
                printf("Alumno ingresado\n");
            }
            break;

        case 2:

        mostrarAlumnos(legajo, nombre, nota1, nota2, promedio, TAM);

            break;
        case 3:

        //Modificar
            break;

        case 4:

        //Baja
            break;

        case 5:

        for(i=0; i<TAM ;i++)
        {
            for(j=i+1; j<TAM; j++)
            {
                if(strcmp(nombre[i],nombre[j])>0)
                {
                strcpy(aux,nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], aux);

                auxInt= nota1[i];
                nota1[i]=nota1[j];
                nota1[j]=auxInt;

                auxInt= nota2[i];
                nota2[i]=nota2[j];
                nota2[j]=auxInt;

                //auxFloat= promedio[i];
                //promedio[i]=promedio[j];
                //promedio[j]=auxFloat;

                auxLeg=legajo[i];
                legajo[i]=legajo[j];
                legajo[j]=auxLeg;

                comparar=strcmp(nombre[i],nombre[j]);
                }
            }
        }
        //printf("%d\n", comparar);
        mostrarAlumnos(legajo, nombre, nota1, nota2, promedio, TAM);
        break;

        default:
            printf("ERROR. Ingrese numero valido");
    }

}
while(opcion!=9);

    return 0;
}


int buscarLibre(int legajos[], int tam)
{
    int index=-1;
    int i;
    for (i=0; i<tam; i++) //
    {
        if (legajos[i] == 0)
        {
            index = i;
            break;
        }
    }

    return index;
}

int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index ;
    index = buscarLibre(legajos, tam);
            if(index!=1)
            {
            printf("\nIngrese su legajo: ");
            scanf("%d", &legajos[index]);

            printf("Ingrese su nombre: ");
            fflush(stdin);
            gets(nombres[index]);

            printf("Ingrese su nota 1: ");
            scanf("%d", &nota1[index]);

            printf("Ingrese su nota 2: ");
            scanf("%d", &nota2[index]);

            promedio[index]=calcularPromedio(nota1[index],nota2[index]);
            printf("\nEl promedio del alumno es: %2.5f\n",promedio[index]);

            }

    return index;
}


float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio =(float)(nota1+nota2)/2;
    return promedio;

}


void mostrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                {
                    promedio[i]=calcularPromedio(nota1[i],nota2[i]);
                    printf("%d %s %d %d %.2f \n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i] );
                }

            }
// te amo yo tu admirador sece
}
