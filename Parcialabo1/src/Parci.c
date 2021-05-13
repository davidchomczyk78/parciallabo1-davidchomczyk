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
		lista[i] = biciLoca(T);
	}
}
void ListaServivios(Servicios biciLoca)
{
	printf("%d %s %f \n", biciLoca.id,biciLoca.descripcion,biciLoca.precio);

}
void ModificarTrabajo(Trabajo lista[], int tam)
{

	int idIngresado;
	int i;
	printf("ingrese id");
	scanf("%d", &idIngresado);

	for(i=0; i<tam; i++)
		{
			if(idIngresado == lista[i].id)
			{
				//que quiere modificar se hace un bucle y preguntar

				printf(" ingrese Nombre:");
				fflush(stdin);
				scanf("%d", lista[i].id);
			}
		}
}

Trabajo IngresoTrabajos()
{
	Trabajo realizados;

	printf(" Ingrese id");
	scanf("%d", &realizados.id);

	printf(" Ingrese marca de Bicicleta:");
	scanf("%[^\n]", realizados.marcaBicicleta);

	printf("Ingrese rodado de bicleta:");
	scanf("%d", &realizados.rodadoBicicleta);

	printf("Ingrese feche.mes.anio:");
	scanf("%d", &realizados.fecha);

	printf("ingrese id de servicio:");
	scanf("%d", &realizados.idServivio);

	return realizados;
}
