/*
 ============================================================================
 Name        : tp1.c
 Author      : juan,Dagostino
 Version     :
 Copyright   : Your copyright notice
 Description : Trabajo practico laboratorio de programacion
 ============================================================================
 

#include <stdio.h>
#include <stdlib.h>
#include "tepe1.h"
#include "funcionestp1.c"


int main (void){

	//quiero que el main me tome los datos y los muestre
	float km;
	float validacionkm;
	float precioLatam;
	float precioAerolineas;
	float validacionPrecio;
	float precioPorKm;
	float diferenciaDePrecios;
	float debitoLatam;
	float creditoLatam;
	float btcLatam;
	float pULatam;
	float debitoAerolineas;
	float creditoAerolineas;
	float btcAerolineas;
	float pUAerolineas;
	float diferenciaDePrecio;
	int opcionUno;
	int opcionDos;

	//a continuacion muestro un submenu
do{

	printf("seleccione una opcion");

	printf("1)ingresar los km del viaje: /n");

	printf("2) ingresar precio: /n");

	printf("3)continuar");

	printf("eleccion: ");

	scanf("%d", &opcionUno);

		switch(opcionUno){

			case 1:
				printf("Por favor ingrese los km que tuvo el viaje: /n"); //ingreso los km

				scanf("%2.f",&km); //le asigno un espacio en memoria

				validacionkm = validarKm (km); // los valido
			break;

			case 2:
				printf(" Por favor indique el precio del vuelo para Latam: /n"); //tomo los precios de ambas empresas y los valido

				scanf("%f",&precioLatam);

				validacionPrecio = validarPrecios (precioLatam);

				printf("Por favor indique el precio del vuelo para aerolineas: /n");

				scanf("%f",&precioAerolineas);

				validacionPrecio = validarPrecios (precioAerolineas);

			break;

			case 3:

			break;

			default:

				printf("error, el numero no corresponde con una opcion");
		}

	}while(opcionUno != 3);


	debitoLatam = calcularDebito (precioLatam);

	creditoLatam = calcularCredito (precioLatam);

	btcLatam = calcularBtc(precioLatam);

	pULatam = calcularPu (precioLatam, km);

	debitoAerolineas = calcularDebito (precioAerolineas);

	creditoAerolineas = calcularCredito (precioAerolineas);

	btcAerolineas = calcularBtc(precioAerolineas);

	pUAerolineas = calcularPu (precioAerolineas, km);

	diferenciaDePrecio = calcularDiferenciaDePrecios ( precioLatam,  precioAerolineas);

			//llame a las funciones correspondientes para ejecutar los calculos

			// ejecuto otro menu
do{
	printf("elija una opcion /n");

	printf("1)mostrar los precios de Latam /n");

	printf("2)mostrar los precios de Aerolineas /n");

	printf("3) mostrar ambos");

	printf("4)mostrar la diferencia de precios por km /n");

	printf("5) salir");

	printf("eleccion: /n")

	scanf("%d", &opcionDos);

		switch(opcionDos){
			case 1:

					printf("Pago de vuelos Latam: /n");

					printf("1) El pago con la tarjeta de debito para Latam es de:$ %f",debitoLatam);

					printf("2) El pago con la tarjeta de credito para Latam es de:$ %f",creditoLatam);

					printf("3) El pago con bitcoin para Latam es de:$ %f",btcLatam);

					printf("4) El pago por km para Latam es:$ %f",pULatam);

			break;

			case 2:
					printf("Pago de vuelos Aerolineas: /n");

					printf("1) El pago con la tarjeta de debito para Aerolineas es de:$ %f",debitoAerolineas);

					printf("/n2) El pago con la tarjeta de credito para Aerolineas es de:$ %f",creditoAerolineas);

					printf("/n3) El pago con bitcoin para Aerolineas es de:$ %d",btcAerolineas);

					printf("/n4) El pago con la tarjeta de debito para Aerolineas es:$ %f",pUAerolineas);

			break;

			case 3:

					printf("Pago de vuelos Latam: /n");

					printf("1) El pago con la tarjeta de debito para Latam es de:$ %f",debitoLatam);

					printf("/n2) El pago con la tarjeta de credito para Latam es de:$ %f",creditoLatam);

					printf("/n3) El pago con bitcoin para Latam es de:$ %f",btcLatam);

					printf("/n4) El pago por km para Latam es:$ %f",pULatam);

					printf("/nPago de vuelos Aerolineas: /n");

					printf("/n1) El pago con la tarjeta de debito para Aerolineas es de:$ %f",debitoAerolineas);

					printf("/n2) El pago con la tarjeta de credito para Aerolineas es de:$ %f",creditoAerolineas);

					printf("/n3) El pago con bitcoin para Aerolineas es de:$ %f",btcAerolineas);

					printf("/n4) El pago con la tarjeta de debito para Aerolineas es:$ %f",pUAerolineas);

			break;

			case 4:
				printf("la diferencia de precios es: $ %f", diferenciaDePrecio);
			break;

			case 5:
			break;

			}
}while(opcionDos != 5);



}
*/
