/*
 ============================================================================
 Name        : arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_Array.h"
#include "cursada.h"

#define CANTIDAD_EDADES 5
int main(void) {
	setbuf(stdout,NULL);

	int arrayEdades[CANTIDAD_EDADES];
	int maximo;
	int minimo;
	//int promedio;

	for(int i=0;i<CANTIDAD_EDADES;i++)
	{
		utn_getNumero(arrayEdades,"Ingrese su edad","Edad no valida[0-150]",0,150,2);
	}
	if(utn_getMaximoArray(arrayEdades,CANTIDAD_EDADES,&maximo)==0)
	{
		printf("El numero maximo es :%d",maximo);
	}

	if(utn_getMinimoArray(arrayEdades,CANTIDAD_EDADES,&minimo)==0)
		{
		printf("\nEl numero minimo es :%d",minimo);
		}

	return EXIT_SUCCESS;
}
