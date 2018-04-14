#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0, numeroA, flag=0, flag1=0;
    float a, b, suma=0, resta=0, division=0,multiplicacion=0;
    unsigned long factorial=0;

    while(seguir=='s')
    {
        system("cls");

        if(flag==0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
             printf("1- Ingresar 1er operando (A=%.2f)\n",a);
        }
        if(flag1==0)
        {
              printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
              printf("2- Ingresar 2do operando (B=%.2f)\n",b);
        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("Introduzca opcion: ");
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                   a=pedirNumero();
                   flag++;
                break;
            case 2:
                   b=pedirNumero();
                   flag1++;
                break;
            case 3:
                   if(flag==0 || flag1==0)
                   {
                       printf("\n Error. Debe ingresar 1er y 2do operando para realizar la suma.\n\n");
                   }
                   else
                   {
                       suma=calcularSuma(a,b);
                       printf("\n %.2f + %.2f = %.2f\n\n",a,b,suma);
                   }
                   system("pause");
                break;
            case 4:
                   if(flag==0 || flag1==0)
                   {
                       printf("\n Error. Debe ingresar 1er y 2do operando para realizar la resta.\n\n");
                   }
                   else
                   {
                       resta=calcularResta(a,b);
                       printf("\n %.2f - %.2f = %.2f\n\n",a,b,resta);
                   }
                   system("pause");
                break;
            case 5:
                   if(flag==0 || flag1==0)
                   {
                       printf("\n Error. Debe ingresar 1er y 2do operando para realizar la division.\n\n");
                   }
                   else
                   {
                       division=calcularDivision(a,b);
                       if(b!=0)
                        {
                            printf("\n %.2f / %.2f = %.2f \n\n",a,b,division);
                        }
                   }
                   system("pause");
                break;
            case 6:
                   if(flag==0 || flag1==0)
                   {
                       printf("\n Error. Debe ingresar 1er y 2do operando para realizar la multiplicacion.\n\n");
                   }
                   else
                   {
                       multiplicacion=calcularMultiplicacion(a,b);
                       printf("\n %.2f * %.2f = %.2f\n\n",a,b,multiplicacion);
                   }
                    system("pause");
                break;
            case 7:
                   numeroA=(int) a;
                   if(flag==0)
                   {
                        printf("\n Error. Debe ingresar un numero entero para calcular el factorial.\n\n");
                   }
                    else
                        if(numeroA>=0 && numeroA<13)
                        {
                            factorial=calcularFactorial(numeroA);
                            printf("\n %d! = %lu\n\n",numeroA,factorial);
                        }
                        else
                        {
                            printf("\n No se puede calcular el factorial de un numero negativo o mayor a 13.\n\n");
                        }
                    system("pause");
                break;
            case 8:
                   if(flag==0 || flag1==0)
                   {
                        printf("\n Error. Debe ingresar operandos para realizar las operaciones.\n\n");
                   }
                   else
                   {
                       suma=calcularSuma(a,b);
                       printf("\n %.2f + %.2f = %.2f\n\n",a,b,suma);
                       resta=calcularResta(a,b);
                       printf("\n %.2f - %.2f = %.2f\n\n",a,b,resta);
                       division=calcularDivision(a,b);
                       if(b!=0)
                        {
                            printf("\n %.2f / %.2f = %.2f \n\n",a,b,division);
                        }
                        multiplicacion=calcularMultiplicacion(a,b);
                        printf("\n %.2f * %.2f = %.2f\n\n",a,b,multiplicacion);
                        numeroA=(int) a;
                        if(flag==0)
                        {
                            printf("\n Error. Debe ingresar un numero entero para calcular el factorial.\n\n");
                        }
                        else
                        if(numeroA>=0 && numeroA<13)
                        {
                            factorial=calcularFactorial(numeroA);
                            printf("\n %d! = %lu\n\n",numeroA,factorial);
                        }
                        else
                        {
                            printf("\n No se puede calcular el factorial de un numero negativo o mayor a 13.\n\n");
                        }

                    }
                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
            default:
            printf("\nOpcion incorrecta, vuelva a intentar\n\n");
            system("pause");
            break;
        }
    }
    return 0;
}
