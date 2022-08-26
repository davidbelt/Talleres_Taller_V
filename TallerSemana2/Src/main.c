/*
 * main.c
 *
 *  Created on: Aug 26, 2022
 *      Author: david
 */

#include <stdint.h>

//Definicion de variables

//Variables de 8 bits

unsigned char SiempreUsarCamelCase = 7;  	//Definicion de una variable


uint8_t DiasDeLaSemana = 7;					//Definicion e inicializacion de una variable

/* Estructura: u simplifica unsigned
 * int indica que vamos a trabajar con variables enteras
 *
 */
char MiPrimerCaracter = 'D'; 				//Definicion del caracter

int8_t MiPrimerNumeroNegativo = -12;		//Definicion numero negativo

	//Variables de 16bits

unsigned short DiasAnuales 	= 365 ;			//Definicion 16 bits

uint16_t DiasAnuales2 		= 370;

	//Variables de 32 bits

unsigned int x, y, z;

int a = 1, b = 2, c = 3;

unsigned int i; int j; long k;

//otros tipos de variables

char MiPrimerArreglo[5] = "LINUX" ;
/*
 * Entre los corchetes se coloca la cantidad de elemenotos
 */

uint64_t MiSegundoArreglo[3] = {299792458,7970190405,0};

int main(void){

	//Tamaño de variables de difernetes compiladores
	char edad = 22;

	char sizeChar 			= sizeof(edad);
	char sizeshort 			= sizeof(short);
	char sizeInt			= sizeof(int);
	char sizeIntLong		= sizeof(long int);
	char sizelonglongint	= sizeof(long long int);

}

