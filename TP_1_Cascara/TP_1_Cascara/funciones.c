#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float pedirNumero()
{
    float auxiliar;
    printf("Ingrese un numero: ");
    scanf("%f",&auxiliar);
    return auxiliar;
}

float calcularSuma(float numero1, float numero2)
{
    float resultado;
    resultado=numero1+numero2;

    return resultado;
}

float calcularResta(float numero1, float numero2)
{
    float resultado;
    resultado=numero1-numero2;

    return resultado;
}

float calcularDivision(float numero1, float numero2)
{
    float resultado;
    if(numero2!=0)
    {
     resultado=numero1/numero2;
    }
    else
    {
     printf("\n ERROR. No se puede dividir con cero.\n\n");
    }
    return resultado;
}

float calcularMultiplicacion(float numero1, float numero2)
{
    float resultado;
    resultado=numero1*numero2;
    return resultado;
}

unsigned long calcularFactorial (int numero1)
{
    if(numero1==1 || numero1==0)
    {
      return 1;
    }
    else
    {
      return numero1 * calcularFactorial(numero1-1);
    }
}

