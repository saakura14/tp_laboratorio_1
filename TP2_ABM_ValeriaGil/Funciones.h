#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

//funciones get.
/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
float function_getFloat(char msj[]) ;

 /**
 * \brief Solicita un numero entero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El numero entero ingresado por el usuario
 *
 */
int function_getInt(char msj[] );

 /**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El numero entero ingresado por el usuario
 *
 */
char function_getChar(char msj[]) ;

 /**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */
int function_esNum(char str[]) ;

 /**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int function_esSoloLetras(char str[]) ;

/**
 * \brief Verifica si el valor recibido contiene solo letras y números
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es
 *
 */
int function_esAlfaNumerico(char str[]) ;

/**
 * \brief Verifica si el valor recibido contiene solo números, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int function_esTelefono(char str[]) ;

/** \brief Solicita un texto
 *
 * \param char array mensaje a mostrar.
 * \param  char array donde se guardara el mensaje ingresado.
 *
 */
void function_getString (char msj[],char input[]) ;

 /**
 * \brief Solicita un texto al usuario y lo devuelve validado.
 * \param char array mensaje a ser mostrado
 * \param char array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int function_getStringLetras(char msj[],char input[]) ;

 /**
 * \brief Solicita un texto numérico al usuario y lo devuelve valido si es solo numeros.
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int function_getStringNumeros(char msj[],char input[]) ;

/** \brief Valida si desea continuar o no
 *
 * \param  array char de mensaje a mostrar
 * \param  array char input a guardar
 * \return input
 *
 */
void function_continueYesOrNo(char msj[],char input[]) ;

/** \brief Transforma array string to float
 *
 * \param array a convertir
 * \param lugar donde guardar el float final
 * \return float convertido
 *
 */
float function_toFloat(char original[],double floatConverted);



#endif // FUNCIONES_H_INCLUDED
