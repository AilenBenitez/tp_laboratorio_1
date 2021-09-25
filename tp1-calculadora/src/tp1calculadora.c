/*
 ============================================================================
 Name        : tp1-calculadora.c
 Author      : Benํtez,Ail้n Rocํo
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "tp1_calculadora.h"
#include "biblioteca_logica_tp1_calculadora.h"


int main(void) {
	setbuf(stdout, NULL);
	int opcionMenuElegida;
	float numeroIngresadoA;
	float numeroIngresadoB;
	float respuestaSuma;
	float respuestaResta;
	float respuestaMultipliacion;
	float respuestaDivision;
	int respuestaFatorialA;
	int respuestaFactorialB;
	int flagNumeroA = 0;
	int flagNumeroB = 0;
		do
		{
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("    BIENVENIDO A LA CALCULADORA DE AILUดS PRODUCTIONS!\n");
		printf("จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ\n");
		printf("1. Ingresar 1er operando (A=%f)\n",numeroIngresadoA);
        printf("2. Ingresar 2do operando (B=%f)\n",numeroIngresadoB);
    	printf("3. Calcular todas las operaciones\n");
	    printf("4. Informar resultados\n");
    	printf("5. Salir\n");
    	printf("จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ\n");
		opcionMenuElegida=SeleccionarNumero();
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

			switch (opcionMenuElegida)
			{
				case 1:
					numeroIngresadoA=IngresarNumeroA();
					flagNumeroA = 1;
					break;
				case 2:
					numeroIngresadoB=IngresarNumeroB();
					flagNumeroB = 1;
					break;
				case 3:
					if (flagNumeroA == 1 && flagNumeroB == 1){
						printf("	a) Calcular la suma (%f+%f)\n",numeroIngresadoA,numeroIngresadoB);
							respuestaSuma=sumar(numeroIngresadoA,numeroIngresadoB);
						printf("	b) Calcular la resta (%f-%f)\n",numeroIngresadoA,numeroIngresadoB);
							respuestaResta=restar(numeroIngresadoA,numeroIngresadoB);
						if(numeroIngresadoB!=0){
							printf("	c) Calcular la division (%f/%f)\n",numeroIngresadoA,numeroIngresadoB);
							respuestaDivision=dividir(numeroIngresadoA,numeroIngresadoB);
						}
							else{
								printf("	c)No es posible dividir por cero\n");
							}
						printf("	d) Calcular la multiplicacion (%f*%f)\n",numeroIngresadoA,numeroIngresadoB);
							respuestaMultipliacion=multiplicacion(numeroIngresadoA,numeroIngresadoB);
						if(numeroIngresadoA<=0 || ValidacionEnteroA(numeroIngresadoA)==1){
							printf("	d)No es posible realizar un factorial con numeros flotantes, ceros o negativos\n");
						}
							else{
								printf("	e) Calcular el factorial del numero A (%f!)\n",numeroIngresadoA);
								respuestaFatorialA=factorialA(numeroIngresadoA);
							}
						if(numeroIngresadoB<=0||ValidacionEnteroB(numeroIngresadoB)==1){
							printf("	d)No es posible realizar un factorial con numeros flotantes, ceros o negativos\n");
						}
							else{
								printf("	d) Calcular el factorial del numero B (%f!)\n",numeroIngresadoB);
								respuestaFactorialB=factorialB(numeroIngresadoB);
						}
					}
					else{

						printf("ERROR! ASEGURESE DE ESTAR INGRESANDO NUMEROS EN AMBOS OPERANDOS!:)\n");
					}
					break;

				case 4:
					printf("	a)El resultado de %f+%f es: %f\n",numeroIngresadoA,numeroIngresadoB,respuestaSuma);
					printf("	b)El resultado de %f-%f es: %f\n",numeroIngresadoA,numeroIngresadoB,respuestaResta);
					if(numeroIngresadoB!=0){
					printf("	c)El resultado de %f/%f es: %f\n",numeroIngresadoA,numeroIngresadoB,respuestaDivision);
					}
					else{
					printf("	c)No es posible dividir por cero\n");
					}
					printf("	d)El resultado de %f*%f es: %f\n",numeroIngresadoA,numeroIngresadoB,respuestaMultipliacion);
					if(numeroIngresadoA<=0 ||ValidacionEnteroA(numeroIngresadoA)==1){
						printf("	e)No es posible realizar un factorial con numeros flotantes, ceros o negativos\n");
					}
					else{
						printf("	e)El factorial de %f es: %d\n",numeroIngresadoA,respuestaFatorialA);
					}
					if(numeroIngresadoB<=0 || ValidacionEnteroB(numeroIngresadoB)==1){
						printf("	e)No es posible realizar un factorial con numeros flotantes, ceros o negativos\n");
					}
					else{printf("	e)El factorial de %f es: %d\n",numeroIngresadoB,respuestaFactorialB);
					}
					break;
			}
		} while (opcionMenuElegida!=5);

		printf(" AILU'S PRODUCTIONS LE AGRADECE POR USAR ESTA CALCULADORA! VUELVA PRONTOS!:)");

	return EXIT_SUCCESS;
}
