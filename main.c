#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "biblioteca_lean.h"
#include "inputs_lean.h"
#define TAM 2

int main()
{
    /*int numero;

    printf("Ingrese un numero: ");
    if(scanf("%d", &numero))
    {
        printf("%d", numero);
    }
    else
    {
        printf("ERROR.");
    }*/

    /*char letra;

    printf("Ingrese una letra: ");
    fflush(stdin);
    scanf("%c", &letra);
    if(isalpha(letra))
    {
        printf("%c", letra);
    }
    else
    {
        printf("ERROR.");
    }

    char nombre[5] = "J";
    printf("tamanio de nombre %d", sizeof(nombre));*/

    /*int vec[TAM] = {1,2};

    for(int x=0; x<TAM; x++)
    {
        printf("%d ", vec[x]);
    }

    if((ordenarInt(vec, TAM, 1)) == -1)
    {
        printf("Error.\n");
    }
    else
    {
        printf("\n");
        for(int x=0; x<TAM; x++)
        {
            printf("%d ", vec[x]);
        }
    }*/
    /*char nombre[10] = "lEANdRo";
    formatSustP(nombre);
    printf(nombre);

    printf("\n");

    formatSustC(nombre);
    printf(nombre);*/

    /*eFecha fecha = {21,10,2020};
    eFecha fechaHoy = {21,10,2020};
    eFecha fechaMin = {30,9,2020};
    if(validarFecha(fecha, fechaHoy, fechaMin)==0)
    {
        printf("Error en los parametros.\n");
    }*/
    //int numero;
    //if(getInt(&numero, 0, 3, 2, "Ingrese un numero del 0-3: ","Error. Numero no valido\n"))

    char name[15];
    if(getString(name, 15, 3, "Ingrese su nombre: ", "Error. "))
    {
        formatSustP(name);
        printf("%s", name);
    }
    else
    printf("Se salteara el paso.\n\n");


           // printf("Ingrese sueldo: ");



    return 0;
}



