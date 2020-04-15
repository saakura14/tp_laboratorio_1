#include <stdio.h>
#include <stdlib.h>
#include "Gil.h"


int cargarNumero()
{
    int num;

    printf("Ingresar un numero:");
    scanf("%d" , &num);

    return num;

}

int calculoSuma(int num1 , int num2)
{

    return num1+num2;

}

int calculoResta(int num1 , int num2)
{

    return num1-num2;

}

int calculoMultiplicacion(int num1 , int num2)
{

    return num1*num2;

}

float calculoDivision(int num1 , int num2)
{
    float resultado;

    if(num2!=0)
    {
        resultado = (float) num1/num2;
    }else
        {
            printf("Error, no se puede dividir por 0.\n");
        }

    return resultado;

}


int calculoFactorial(int numero)
{
	int factorial=1;

	for(int i=numero;i>0;i--)
	{
		factorial=factorial*i;
	}
	return factorial;
}
