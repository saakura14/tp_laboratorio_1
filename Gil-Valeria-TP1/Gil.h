#ifndef GIL_H_INCLUDED
#define GIL_H_INCLUDED



int cargarNumero();
/** \brief Solciita un numero al usuario
 * \param  -
 * \return retornna un entero
 */

int calculoSuma(int num1 , int num2);
/** \brief Suma dichos numeros ingresados por el usuario.
 * \param  Ingresa primer numero.
 * \param  Ingresa el segundo numero.
 * \return Retorna la suma de ambos numeros ingresados por el usuario.
 */

int calculoResta(int num1 , int num2);
/** \brief Resta los numeros ingresados por el usuario.
 * \param  Ingresa primer numero.
 * \param  Ingresa el segundo numero.
 * \return retorna el resultado de la resta realizada.
 *
 */

int calculoMultiplicacion(int num1 , int num2);
/** \brief
 *
 * \param Ingresa primer numero.
 * \param Ingresa el segundo numero.
 * \return retorna el resultado de la multiplicacion resalizada.
 *
 */

float calculoDivision(int num1 ,int num2);
/** \brief Divide los numeros que ingresa el usuario, La division por 0 no se puede realizar.
 * \param Ingresa primer numero.
 * \param Ingresa el segundo numero.
 * \return Retorna el resultado de la division.
 *
 */

int calculoFactorial(int numero);
/** \brief Factoriza los numeros que ingrese el usuario. Utillizo For para saber la cantidad de vueltas que va a dar y va decreciendo a medida que el numero siga siendo mayor al contador.
 * \param Ingresa primer numero.
 * \param Ingresa el segundo numero.
 * \return restorna el factorial de cada numero ingresado.
 *
 */






#endif // GIL_H_INCLUDED
