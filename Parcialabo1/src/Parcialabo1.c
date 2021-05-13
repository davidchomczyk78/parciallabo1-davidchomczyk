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


int main(void)
{
	setbuf(stdout,NULL);

	Servicios biciLoca[T]={250,"Limpieza",300,"Parche",400,"Centrado",350,"Cadena"};
	int opciones;
	do{
		printf("1.ALTA: trabajo\n");
		printf("2.MODIFICAR: trabajo\n");
		printf("3.BAJA: trabajo\n");
		printf("4.LISTAR TRABAJO:\n");
		printf("5.LISTA SERVICIOS:\n");
		printf("6.TOTAL\n:");
		printf("10.SALIR:");
		printf("elija opciones:");
		scanf("%d", &opciones);
	}while(opciones!=10);

		switch(opciones)
		{
			case 1:
				CargaDeTrabajo(biciLoca, T);
				break;
			case 2:
				break;
			case 3:
				break;

		}

	return EXIT_SUCCESS;
}
