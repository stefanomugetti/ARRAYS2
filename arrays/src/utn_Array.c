/*
 * array.c
 *
 *  Created on: Mar 30, 2021
 *      Author: Stefano
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn_Array.h"
#include "cursada.h"

int utn_getMaximoArray(int* array,int limite,int* resultado)
{
	int retorno =-1;
	int auxMax;

	if(array != NULL && limite > 0 && resultado != NULL)
	{
		auxMax=array[0];

		retorno=0;
		for(int i=0;i<limite;i++)
		{
			if(array[i]>auxMax)
			{
				auxMax=array[i];
			}
		}
		*resultado=auxMax;
	}

	return retorno;
}

int utn_getMinimoArray(int* array,int limite,int* resultado)
{
	int retorno =-1;
	int auxMin;

	if(array != NULL && resultado != NULL && limite > 0)
	{
		retorno=0;
		auxMin=array[0];
		for(int i=0;i<limite;i++)
		{
			if(array[i]<auxMin)
			{
				auxMin=array[i];
			}
		}
		*resultado=auxMin;
	}
	return retorno;
}
