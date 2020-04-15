#include <stdio.h>
#include <stdlib.h>
#include "Gil.h"



/** \brief
 *
 * \param
 * \param
 * \return
 *
 */




int main(void)
{
    int opcion;
    int num1;
    int num2;

    int flagNum1 = 0;
    int flagNum2 = 0;

    int ecuacionSuma;
    int ecuacionResta;
    float ecuacionDivision;
    int ecuacionMultiplicacion;
    int ecuacionFactorial1;
    int ecuacionFactorial2;


    do
    {
        printf("-- MENU DE OPCIONES --\n\n1. Ingresar primer numero:\n2. Ingresar segundo numero:\n3. Calcular todas las operaciones\n4. Informar resultados\n5. Salir\n\n");
        scanf("%d", &opcion);
        fflush(stdin);

        switch(opcion)
        {

        case 1:
            num1=cargarNumero();
            flagNum1=1;
            system("cls");
            break;
        case 2:
            num2=cargarNumero();
            flagNum2=1;
            system("cls");
            break;
        case 3:
            if(flagNum1==1&&flagNum2==1)
            {
                ecuacionSuma= calculoSuma(num1, num2);
                ecuacionResta= calculoResta(num1, num2);
                ecuacionMultiplicacion= calculoMultiplicacion(num1, num2);
                ecuacionDivision= calculoDivision(num1, num2);
                ecuacionFactorial1= calculoFactorial(num1);
                ecuacionFactorial2= calculoFactorial(num2);
                printf("Realizando ecucaciones . . \n\n");

            }
            else
            {
                printf("Error, ingrese un numero\n\n");


            }

            if(num2==0)
            {
                printf("\nNo se puede dividir por 0, ingrese numero valido..\n");
            }
            system("pause");


            break;
        case 4:
            printf("\nEl resultado de %d + %d es %d", num1, num2, ecuacionSuma);
            printf("\nEl resultado de %d - %d es %d", num1, num2, ecuacionResta);
            printf("\nEl resultado de %d * %d es %d",num1, num2, ecuacionMultiplicacion);
            printf("\nEl resultado de la division es %.2f ", ecuacionDivision);
            printf("\nEl numero factorial del primer numero es %d", ecuacionFactorial1);
            printf("\nEl numero factorial del segundo numero es %d\n\n", ecuacionFactorial2);
            break;
        case 5:
            break;
        }


        system("pause");

    }
    while(opcion!=5);



    return 0;
}
