/*
 ============================================================================
 Name        : Parcialabo1.c
 Author      : da
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Parci.h"
#define T 3
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

int main(void)
{
	setbuf(stdout,NULL);

	Servicios biciLoca[T]={250,"Limpieza",300,"Parche",400,"Centrado",350,"Cadena"};
	int opciones;
	do{
		printf("A.ALTA: trabajo\n");
		printf("B.MODIFICAR: trabajo\n");
		printf("C.BAJA: trabajo\n");
		printf("D.LISTAR TRABAJO:\n");
		printf("E.LISTA SERVICIOS:\n");
		printf("F.TOTAL\n:");
		printf("10.SALIR:");
		printf("elija opciones:");
		scanf("%d", &opciones);
	}while(opciones!=10);

		switch(opciones)
		{
			case 'A':
				CargaDeTrabajo(biciLoca, T);
				break;
			case 'B':
				ModificarTrabajo(Trabajo, T);
				break;
			case'C':
				break;
			case'E':
				 ListaServivios(biciLoca, T);
				break;

		}

	return EXIT_SUCCESS;
}
