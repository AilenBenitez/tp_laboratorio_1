/*
 * biblioteca_logica_tp1_calculadora.c
 *
 *  Created on: 23 sep. 2021
 *      Author: Ismael
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca_logica_tp1_calculadora.h"

int SeleccionarNumero(){
	setbuf(stdout, NULL);
	int opcionMenuElegida;
	printf("Elija una opcion: ");
	scanf("%d", &opcionMenuElegida);
	while(opcionMenuElegida<1||opcionMenuElegida>5){
	printf("ERROR! Elija una opcion entre las que figuran en el menu: ");
	scanf("%d", &opcionMenuElegida);
	}
	return opcionMenuElegida;
}

float IngresarNumeroA(){
	float numeroIngresadoA;
	printf("usted eligió la opción 1.");
	printf("ingrese el  primer operando:\n");
	scanf("%f", &numeroIngresadoA);
	return numeroIngresadoA;
}

float IngresarNumeroB(){
	float numeroIngresadoB;
	printf("usted eligió la opción 2.");
	printf("ingrese el segundo operando:\n");
	scanf("%f",&numeroIngresadoB);
	return numeroIngresadoB;
}

int ValidacionEnteroA(float numeroA){
	int numeroEntero;
	int validacionA;

	numeroEntero=numeroA;
	if(numeroA-numeroEntero==0){
		validacionA=0; //es entero
	}
	else{
		validacionA=1;//es decimal
	}
	return validacionA;
}

int ValidacionEnteroB(float numeroB){
	int numeroEntero;
	int validacionB;

	numeroEntero=numeroB;
	if(numeroB-numeroEntero==0){
		validacionB=0; //es entero
	}
	else{
		validacionB=1;//es decimal
	}
	return validacionB;
}

