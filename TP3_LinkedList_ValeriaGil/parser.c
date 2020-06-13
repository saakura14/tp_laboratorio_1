#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param pFile FILE*
 * \param pArrayListEmployee LinkedList*
 * \return retorno int. 0 si salio todo bien, -1 si no se pudo completar la operacion.
 *
 */
int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{
    int retorno = -1;
   Employee *pEmployee;

	char id[50];
	char nombre[50];
	char horas[50];
	char sueldo[50];

	int cabecera = 1;

	if (pFile != NULL)
    {
		while (!feof(pFile))
        {
			if (cabecera)
			{
				fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, nombre,
						sueldo,horas);
				cabecera = 0;
			}
			fscanf(pFile, "%[^,], %[^,], %[^,], %[^\n]\n", id, nombre,
					sueldo,horas);
			pEmployee = employee_newParametros(id, nombre, horas,sueldo);

			if (pEmployee != NULL)
            {
				ll_add(pArrayListEmployee, pEmployee);
				retorno = 0;
			}
		}
	}
    return retorno;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee)
{
    Employee *pEmployee;
	int retorno = -1;

	if (pFile != NULL) {	//mientras el archivo no sea nulo, entro al bucle
		while (!feof(pFile)) {		// mientras no sea final de archivo, bucleo
			pEmployee = employee_new(); // inicializo
			if (fread(pEmployee, sizeof(Employee), 1, pFile) == 1) {
				ll_add(pArrayListEmployee, pEmployee); // copio lo de pEmplo en el array
			}
		}
		retorno = 0;
	}
    return retorno;
}
