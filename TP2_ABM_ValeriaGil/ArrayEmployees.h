#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED

// Se declara una estructura para el empleado.
typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}eEmployee;

//Funciones

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 */
int initEmployees(eEmployee list[], int len) ;

/** \brief To indicate that all position in the array are empty,
* this function put the flag (isEmpty) in TRUE in all
* position of the array
* \param list Employee* Pointer to array of employees
* \param len int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int addEmployee(eEmployee list[], int len) ;

/** \brief add in a existing list of employees the values received as parameters
* in the first empty position
* \param list employee*
* \param len int
* \param id int
* \param name[] char
* \param lastName[] char
* \param salary float
* \param sector int
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok */

int findEmployeeById(eEmployee list[], int len, int id) ;

/** \brief find an Employee by Id en returns the index position in array.
*
* \param list Employee*
* \param len int
* \param id int
* \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
*
*/
int removeEmployee(eEmployee list[], int len, int id) ;


/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
*
* \param list Employee*
* \param len int
* \param id int
* \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a employee] - (0) if Ok
*
*/

int searchEmpty(eEmployee lista[],int len) ;

/** \brief Modifica un emplado cargado
 *
 * \param aray de empleados.
 * \param tamaño del array
 *
 */
void modifyEmployee(eEmployee list[], int len) ;

/** \brief Muestra un empleado
 *
 * \param array de empleado a mosrar
 *
 */
void showEmployee (eEmployee list) ;

/** \brief muestra todos los empleados del array
 *
 * \param array de empleados a mostrar
 * \param int tamaño del array
 *
 */
void showEmployees(eEmployee list[],int len) ;

/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param list Employee
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int sortEmployees(eEmployee list[], int len, int order);

/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
*
* \param list Employee*
* \param len int
* \param order int [1] indicate UP - [0] indicate DOWN
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int countOverAverage(eEmployee list[],int len);

/** \brief Calcula el promedio de los salarios del array
 *
 * \param array empleados
 * \param int tamaño del array
 * \return el promedio de los salarios
 *
 */
float averageSalary(eEmployee list[],int len) ;



/** \brief Suma todos los salarios del array del param 1
 *
 * \param array de empleados a contar
 * \param tamaño del array
 * \return float del total de todos los salarios
 *
 */
float totalSalary(eEmployee list[],int len) ;

/** \brief funcion bandera para ver si hay un empleado
 *
 * \param array a recorrer
 * \param tamaño del array
 * \return TRUE si hay un empleado o FALSE si no hay un empleado
 *
 */
int addEmployee(eEmployee list[],int len);



#endif // ARRAYEMPLOYEES_H_INCLUDED
