#include <stdio.h>
#include <stdlib.h>
#include "cursada.h"


int utn_getNumero(int* pDatoIngresado,char* pTexto,char* pTextoError,int min,int max,int reintentos)
{
	int retorno=-1;
	int bufferInt;
if(pDatoIngresado != NULL && pTexto != NULL && pTextoError != NULL && min <= max && reintentos >=0)
{
	for(int i=0;reintentos>=i;reintentos--)
	{
		printf("%s",pTexto);
		fflush(stdin);
		if(scanf("%d",&bufferInt)==1)
		{
			if(min <= max && bufferInt >= min && bufferInt<= max)
			{
				*pDatoIngresado=bufferInt;
				retorno=0;
				break;
				}
				else
				{
					printf("%s",pTextoError);
				}
			}
			else
			{
				printf("%s",pTextoError);
			}
		}
}
	return retorno;
}

int utn_getFloat(float* pDatoIngresado,char* pTexto,char* pTextoError,int min,int max,int reintentos)
{
	int retorno=-1;
	float bufferFloat;

for(int i=0;reintentos>=i;reintentos--)
{
		printf("%s",pTexto);
		fflush(stdin);
	if(scanf("%f",&bufferFloat)==1)
	{
		if(min<max && bufferFloat >= min && bufferFloat <= max)
		{
			*pDatoIngresado=bufferFloat;
			retorno=0;
			break;
		}
		else
		{
			printf("%s",pTextoError);
		}
	}
	else
	{
		printf("%s",pTextoError);
	}
}
	return retorno;
}

int utn_getChar(char* pDatoIngresado,char* pTexto,char* pTextoError,char min,char max,int reintentos)
{
	int retorno=-1;
	char bufferChar;

for(int i=0;reintentos >= i;reintentos--)
{
	printf("%s",pTexto);
	fflush(stdin);
	if(scanf(" %c",&bufferChar)==1)
	{
		if(bufferChar >=min && bufferChar <=max)
		{
			*pDatoIngresado=bufferChar;
			retorno=0;
			break;
		}
		else
		{
			printf("%s",pTextoError);
		}
	}
	else
	{
		printf("%s",pTextoError);
	}
}
return retorno;
}



