#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"

float getFloat(char mensaje[])
{
    float numeroFloat;
    printf("%s", mensaje);
    scanf("%f", &numeroFloat);

    return numeroFloat;
}


/***** Operaciones Matematicas *****/


float Sumar(float x,float y)
{
    float suma;
    suma = x + y;
    return suma;
}

float Restar(float x,float y)
{
    float resta;
    resta=x-y;
    return resta;
}

float Multiplicar(float x,float y)
{
    float multiplicacion;
    multiplicacion= x*y;
    return multiplicacion;
}

float Dividir(float x,float y)
{
    float division;

     division=x/y;

    return division;
}


long long int Factorial(float numero)
{
    int aux;
    int resultado=1;
    numero=(int)numero;

    if (numero==0)
    {
        resultado = 0;
    }
    else
    {

        for(aux=numero; aux>0; aux--)
        {
            resultado=resultado*aux;
        }

    }
    return resultado;
}
