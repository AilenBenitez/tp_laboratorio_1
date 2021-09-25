/*
 * biblioteca_logica_tp1_calculadora.h
 *
 *  Created on: 23 sep. 2021
 *      Author: Ismael
 */

#ifndef BIBLIOTECA_LOGICA_TP1_CALCULADORA_H_
#define BIBLIOTECA_LOGICA_TP1_CALCULADORA_H_

///@brief pide un numero entre el 1 al 5 y lo retoma
///@param ingresa un entero
///@return el numero ingresado
int SeleccionarNumero();

/// @brief pide un numero (puede ser flotante o no) y lo retoma
/// @param ingresa un numero
/// @return el numero ingresado
float IngresarNumeroA();

/// @brief pide un numero (puede ser flotante o no) y lo retoma
/// @param ingresa un numero
/// @return el numero ingresado
float IngresarNumeroB();

/// @brief valida si el primer numero ingresa es entero o no para poder realizar el factorial
/// @param numA
/// @return 1 si es entero, 0 si es flotante
int ValidacionEnteroA(float numeroA);

/// @brief valida si el segundo numero ingresa es entero o no para poder realizar el factorial
/// @param numB
/// @return 1 si es entero, 0 si es flotante
int ValidacionEnteroB(float numeroB);

#endif /* BIBLIOTECA_LOGICA_TP1_CALCULADORA_H_ */
