#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"


int main( )
{

    char opcion;


    float valorA;
    float valorB;

    float suma;
    float resta;
    float division;
    float multiplicacion;
    long long int factorialValorA;
    long long int factorialValorB;

    int flagPrimerNumero = 0;
    int flagSegundoNumero = 0;



    do
    {
        printf("\n(1)Ingresar el primer numero \n");
        printf("(2)Ingresar el segundo numero \n");
        printf("(3)Calcular todas las operaciones \n");
        printf("(4)Informar resultados \n");
        printf("(5)Salir \n");



        printf("\nElija una opcion: ");
        fflush(stdin);
        scanf("%c", &opcion);

        while (opcion!='1' && opcion!='2' && opcion!='3' && opcion!='4' && opcion!='5')
        {
            printf("Opcion incorrecta, ingrese nuevamente una opcion: ");
            fflush(stdin);
            scanf("%c", &opcion);
        }


        switch(opcion)
        {
        case '1':

            valorA= getFloat("Ingrese el primer numero: ");
            flagPrimerNumero= 1;
            break;

        case '2':

            valorB= getFloat("Ingrese el segundo numero: ");
            flagSegundoNumero= 1;
            break;

        case '3':

            if(flagPrimerNumero==1 && flagSegundoNumero==1)
            {
                suma = Sumar(valorA, valorB);
                resta = Restar(valorA, valorB);
                division = Dividir(valorA, valorB);
                multiplicacion = Multiplicar(valorA, valorB);


                if (valorA<0)
                {
                    printf("AVISO: No se puede realizar el factorial de un numero negativo. \n");
                }
                else
                {
                    factorialValorA = Factorial(valorA);
                }

                if (valorB<0)
                {
                    printf("AVISO: No se puede realizar el factorial de un numero negativo. \n");
                }
                else
                {
                    factorialValorB = Factorial(valorB);
                }

                if (valorA==0)
                {
                    division = printf("AVISO: No se puede dividir por cero. \n");
                }

                printf("\nSe han realizado todos los calculos.\n\n");

            }
            else
            {
                printf("AVISO: No se ha ingresado numeros. \n");
            }

            break;

        case '4':

            printf("\nEl primer numero es: %.2f ", valorA);
            printf("\nEl segundo numero es: %.2f \n", valorB);
            printf("\nLa suma es: %.2f ", suma);
            printf("\nLa resta es: %.2f ", resta);
            printf("\nLa multiplicacion es: %.2f ", multiplicacion);

            if (valorA<0||valorB<0)
            {
                factorialValorA = printf("\nERROR!! No se puede realizar el factorial de un numero negativo. \n");
                factorialValorB = printf("\nERROR!! No se puede realizar el factorial de un numero negativo. \n");
            }
            else
            {
                printf("\nEl factorial del primer numero es: %I64d ", factorialValorA);
                printf("\nEl factorial del segundo numero es: %I64d ", factorialValorB);
            }

            if (valorA==0)
            {
                division = printf("\nERROR!! No se puede dividir por cero.");
            }
            else
            {
                division = Dividir(valorA, valorB);
                printf("\nLa division es: %.2f ", division);
            }


            printf("\n\nLos valores fueron restablecidos a 0\n\n");

            valorA = 0;
            valorB = 0;
            suma= 0;
            resta= 0;
            division= 0;
            multiplicacion= 0;
            factorialValorA=0;
            factorialValorB=0;


            break;

        case '5':

            opcion='5';
            break;

        default:

            printf("Error. No se encuentra resultados para la opcion ingresada \n");
            break;
        }

    }
    while(opcion!='5');

}


