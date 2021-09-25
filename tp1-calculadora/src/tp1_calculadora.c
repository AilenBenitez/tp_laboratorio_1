/*
 * tp1_calculadora.C
 *
 *  Created on: 13 sep. 2021
 *      Author: Ismael
 */
#include <stdio.h>
#include <stdlib.h>
#include "tp1_calculadora.h"

float sumar(float numeroA, float numeroB){
    float resultadoSuma;
    resultadoSuma=numeroA+numeroB;
    return resultadoSuma;

}
float restar(float numeroA, float numeroB){
	float resultadoResta;
    resultadoResta=numeroA-numeroB;
    return resultadoResta;

}
float multiplicacion(float numeroA, float numeroB){
	float resultadoMultiplicacion;
    resultadoMultiplicacion=numeroA*numeroB;
    return resultadoMultiplicacion;

}
float dividir(float numeroA, float numeroB){
	float resultadoDivision;
    resultadoDivision=numeroA/numeroB;
    return resultadoDivision;
}

float factorialA(float numA){
	float respuestaFactorialA;
    if(numA==1){
        return 1;
    }
    respuestaFactorialA=numA*factorialA(numA-1);
    return respuestaFactorialA;
}
float factorialB(float numB){
	float respuestaFactorialB;
    if(numB==1){
        return 1;
    }
    respuestaFactorialB=numB*factorialB(numB-1);
    return respuestaFactorialB;
}

