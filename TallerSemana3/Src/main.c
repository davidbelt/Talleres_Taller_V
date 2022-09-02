/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdbool.h>
#include <math.h>



int main(void)
{

	uint8_t estatura = 160 ;
	bool PuedeEntrar;


	if(estatura < 150 ){
		PuedeEntrar = false ;
	}else {
		PuedeEntrar = true ;
	}

	uint32_t dineroEnLaCuenta = 300000 ;
	bool tieneCarro = false;
	bool leAceptaLaSalida;

	if(dineroEnLaCuenta > 150000 && dineroEnLaCuenta < 500000){
		if(tieneCarro){
			leAceptaLaSalida = true ;
		}else {
			leAceptaLaSalida = false;
		}
	}else if( dineroEnLaCuenta < 150000){
		leAceptaLaSalida = false ;
	}else if (dineroEnLaCuenta > 500000){
		leAceptaLaSalida = true;
	}


	for(uint32_t i= 0; i < 10; i++ ){

		uint32_t tablaDel7 = 7*i;

	}

	for (uint16_t horas = 0; horas < 24 ; horas ++){
		for( uint16_t minutos = 0; minutos < 60; minutos ++){
			for(uint16_t segundos = 0; minutos <60; segundos++){
				for(uint16_t contador = 0; contador < 1200000; contador++){
					NOP();
				}
			}
		}

	}

	uint64_t Conversor(uint8_t variables){
		uint8_t dec;

		for(uint64_t i = 0; i < 8*sizeof(variables); i++){
			uint8_t varAux = variables & (1<< i);
			varAux = varAux >> i;
			dec = dec + (varAux *pow(2,i));
		}
		return dec;
	}

    /* Loop forever */
	while(1){

	}
}