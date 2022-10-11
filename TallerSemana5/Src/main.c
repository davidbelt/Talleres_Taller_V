/*
 * main.c
 *
 *  Created on: Sep 15, 2022
 *      Author: david
 */

#include <stdint.h>




int main (void){

	uint16_t dato 	=  1243;

	uint16_t *ptrDato = &dato ;

	uint16_t valorDat 	= 	*ptrDato ;

	*ptrDato = *ptrDato + 1;

	ptrDato ++; //Cambiando la direccion del puntero

	*ptrDato	=	561 ;


	uint32_t direccion = (uint32_t) &dato ;

	uint8_t contenido = 0;

	uint8_t miPrimerArreglo[5] 	= 	{0x43, 'A' , 0x22 , 0xFF, 12}; //Arreglo

	for(uint8_t i= 0; 1<5; i++){

		contenido = miPrimerArreglo[i];

	}//recorrer el arreglo con un for



	for(uint8_t j = 0; j<5; j++){

		contenido = *(miPrimerArreglo + j );

	}//recorrer el arreglo con puntero



	miPrimerArreglo[2]	=	0xad;

	* (miPrimerArreglo +2) 	=	0x42;


/*
 * Estructuras
 *
 *
 */


	struct Estructura
	{
		uint8_t Elemento1;
		uint16_t Elemento2;
		uint64_t Elemento3;
		uint8_t elementoArreglo[3];

	} miEstructura_t;


	miEstructura_t miPrimeraEstructura = {0};




	while(1){

	}



}// fin main
