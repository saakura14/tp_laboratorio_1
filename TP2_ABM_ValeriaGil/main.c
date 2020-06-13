#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ArrayEmployees.h"
#include "Funciones.h"


#define SIZE 1000 // se define SIZE para utilizar como tamaño del array employee que se declarara mas abajo
int menu();
int searchEmpty(eEmployee lista[],int tam);

int main()
{
    eEmployee employee[SIZE];
    char continuar = 's' ; // variable para el do wile del menu
    int order = 0; // variable para ordenar de manera ascendente o descendente la opcion 4


    initEmployees(employee,SIZE) ; // se inicializa todos los empleados en 1 asi se sabe que estan vacios.
    do
    {
        switch(menu())
        {
        case 1:
            addEmployee(employee,SIZE) ;
            break;
        case 2:
            if(addEmployee(employee,SIZE)) // se utiliza la funcion addEmployee como flag para ver si se creo un empleado.
            {
                modifyEmployee(employee,SIZE);
                break;
            }
            else
            {
                printf("\n*** ERROR *** DEBE CARGAR AL MENOS UN EMPLEADO.\n");
                system("pause");
                break ;
            }
        case 3:
            if(addEmployee(employee,SIZE))
            {

                removeEmployee(employee,SIZE,0) ;
                break;
            }
            else
            {
                printf("\n*** ERROR *** DEBE CARGAR AL MENOS UN EMPLEADO.\n");
                system("pause");
                break;

            }
        case 4:
            if(addEmployee(employee,SIZE))
            {
                sortEmployees(employee,SIZE,order) ; //se ordena los empleados y se muestra con sort y show employee
                showEmployees(employee,SIZE);
                printf("\n\n\nEl total de los salarios es de: %.2f \n",totalSalary(employee,SIZE)) ;
                printf(" El promedio de los salarios es de: %.2f\n",averageSalary(employee,SIZE));
                printf(" La cantidad de empleados que superan el salario promedio son: %d\n\n",countOverAverage(employee,SIZE)) ;
                system("pause") ;
                break;
            }
            else
            {
                printf("\n*** ERROR *** DEBE CARGAR AL MENOS UN EMPLEADO.\n");
                system("pause");
                break;
            }
        case 5:
            printf(" *** Saliendo del sistema. ***\n\n");
            continuar = 'n';
            system("pause");
            break;
        default:
            printf("*** ERROR *** Debe ingresar un numero del 1 al 5\n\n") ; // el default se utiliza por si se ingresa un numero que no sea del 1 al 5
            system("pause");
            break;
        }
    }
    while(continuar == 's') ;

}







/** \brief Menu de opciones
 *
 * \return Opcion ingresada
 *
 */

int menu ( )
{
    char auxOption[2];
    int option;
    system("cls") ;
    printf("\n*** Menu de Opciones ***\n\n");
    printf("1-ALTAS \n");
    printf("2-MODIFICAR \n") ;
    printf("3-BAJAS \n");
    printf("4-INFORMAR \n");
    printf("5-SALIR\n\n") ;
    while(!function_getStringNumeros("Ingresar opcion: ",auxOption))
    {
        printf("\n*** ERROR *** Debe ingresar un numero del 1 al 5. \n") ;
        system("pause") ;

    }
    option = atoi(auxOption) ;
    return option;
}
