#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

float resultado;


void bienvenida()
{
    printf("BIENVENIDOS A CALCULADORA\nPor favor, primero ingrese dos numeros y luego, que operacion desea realizar.\n\nComenzemos!!\n\n");
}
void menuCalculadora()
{
    char seguir='s';
    do
    {

        int opcion;

        fflush(stdin);
        printf("\nIngresar 1er operando ");
        scanf("%f",&A);
        fflush(stdin);
        printf("\nIngresar 2do operando ");
        scanf("%f",&B);
        printf("\nPrecione:\n1- Calcular la suma\n2- Calcular la resta\n3- Calcular la division\n4- Calcular la multiplicacion\n5- Calcular el factorial\n6- Calcular todas las operacione\n7- Salir\n");
        scanf("%d",&opcion);

        switch (opcion)
        {
        case 1:
            printf ("\n El total de la suma es: %.2f \n", suma(A,B));
            break;
        case 2:
            printf("\n El total de la resta es: %.2f \n", resta(A,B));
            break;
        case 3:
            printf("\n El total de la division es: %.2f \n", division(A,B));
            break;
        case 4:
            printf("\n El total de la multiplicacion es: %.2f \n", multiplicacion(A,B));
            break;
        case 5:
            printf("\n El factorial es: %I64d \n", factorial(A));

            break;
        case 6:
            printf("\n El total de la suma es: %.2f \n", suma(A,B));
            printf("\n El total de la resta es: %.2f \n", resta(A,B));
            printf("\n El total de la division es: %.2f \n", division(A,B));
            printf("\n El total de la multiplicacion es: %.2f \n", multiplicacion(A,B));
            printf("\n El factorial es: %I64d \n", factorial(A));
            break;
        case 7:
            seguir = 'n';
            break;
        }
        printf("\n¿Desea volver a realizar otra operacion? s/n \n");
        seguir=getche();
    }while(seguir=='s');

}

float suma(float x,float y)
{
    resultado = x + y;
    return resultado;
}

float resta(float x,float y)
{
    resultado=x-y;
    return resultado;
}

float multiplicacion(float x,float y)
{
    resultado=x*y;
    return resultado;
}

float division(float x,float y)
{
    resultado=0;
    if(x<1 || y<1)
    {
        printf("No es posible realizar divisiones con 0 o numeros negativos");
    }
    else
    {
     resultado=x/y;
    }
    return resultado;
}


long long int factorial(float x)
{
    int resultado=1;
    int contador;


    if(x<0)
    {
        printf("No es posible realizar Factorial de un numeros negativos");
        resultado=0;
    }
    else
    {
        for(contador=x; contador>0; contador--)
        {
            resultado=resultado*contador;
        }
    }

    return resultado;
}
