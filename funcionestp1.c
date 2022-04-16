/*
 * funcionestp1.c
 *
 *  Created on: Apr 9, 2022
 *      Author: juanc
 */
#include <stdio.h>
#include <stdlib.h>
#include "tepe1.h"


float validarKm (float km){

	while(km <= 0){
		printf("lo siento, parece que hubo un ingrese los km nuevamente: ");

		scanf("%f",&km);
	}
	return km;

}

float validarPrecios (float precioIngresado){

	while(precioIngresado <= 0){
		printf("error, ingrese precio nuevamente: ");
		scanf("%f",&precioIngresado);
	}

return precioIngresado;
}

float calcularDebito (float precio){

	float debito;

	debito = precio *0.9;

	return debito;
}

float calcularCredito (float precio){
	float credito;

	credito = precio * 1.25;

	return credito;
}

float calcularBtc(float precio){
	float  btc;

	btc = precio / 4606954;

	return btc;
}

float calcularPu (float precio, float km){

	float pu;

	pu = precio / km;

	return pu;

}

float calcularDiferenciaDePrecios (float precioLatam, float precioAerolineas){

	float resultado;

	if(precioLatam > precioAerolineas){

		resultado = precioLatam - precioAerolineas;
	}

	else{
		resultado = precioAerolineas - precioLatam;
	}

	return resultado;
}


