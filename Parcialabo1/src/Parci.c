/*
 * Parci.c
 *
 *  Created on: 13 may. 2021
 *      Author: 54113
 */
#define VACIO 0
#define OCUPADO 1
#define T 4

#include "Parci.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int id;
	char descripcion[25];
	float precio;
	int isEmpty;
}Servicios;

typedef struct
{
	int id;
	char marcaBicicleta[30];
	int rodadoBicicleta;
	int idServivio;
	int fecha;
	int isEmpty;

}Trabajo;

void InicializarTrabajo(Trabajo lista[], int tam)
{
	int i;
	for(i=0; i<tam; i++)
	{
		lista[i].isEmpty = VACIO;
	}
}
void CargaDeTrabajo(Trabajo lista[],int tam)
{
	int i;
	for(i=0; i<tam; i++)
	{
		lista[i] = biciLoca();
	}
}
